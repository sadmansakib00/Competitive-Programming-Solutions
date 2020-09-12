#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,leftOut,k;
    string choices;
    bool flag,leftOutFlag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        getline(cin,choices);
        leftOut = -1;
        bool anArr[100001];
        memset(anArr,0,sizeof(anArr));
        anArr[0] = true;
        leftOutFlag = false;
        for(int i=1; i<=n; i++) {
            flag = false;
            getline(cin,choices);
            stringstream ss(choices);
            ss >> k;
            while(ss >> k) {
                if(!flag && !anArr[k]) {
                    //cout << i << " is getting married to " << k << "\n";
                    flag = true;
                    anArr[k] = true;
                }
            }
            if(!leftOutFlag && !flag) {
                leftOut = i;
                leftOutFlag = true;
            }
        }
        if(leftOut == -1) {
            cout << "OPTIMAL\n";
        } else {
            cout << "IMPROVE\n";
            for(int i=1; i<=n; i++) {
                if(!anArr[i]) {
                    cout << leftOut << " " << i << "\n";
                    break;
                }
            }
        }
    }
}

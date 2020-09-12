#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int anArr[n];
        vector<int> odd;
        flag = false;
        for(int i=0; i<n; i++) cin >> anArr[i];
        for(int i=0; i<n; i++) {
            if(anArr[i]%2==0) {
                cout << "1\n" << i+1 << "\n";
                flag = true;
                break;
            } else odd.push_back(i+1);
            if(odd.size()==2) {
                cout << "2\n" << odd[0] << " " << odd[1] << "\n";
                flag = true;
                break;
            }
        }
        if(!flag) {
            cout << "-1\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,temp = 0;
    cin >> t;
    string r,g;
    bool flag = true,tempFlag;
    while(t-- > 0) {
        flag = true;
        temp = 0;
        cin >> r >> g;
        for(int m=0; m<g.length(); m++) {
            tempFlag = false;
            for(int n=temp; n<r.length(); ) {
                if(g[m] == r[n]) {
                    tempFlag = true;
                    break;
                }
                n = ++temp;
            }
            if(!tempFlag) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

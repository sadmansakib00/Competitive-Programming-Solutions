#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,k,available=0,temp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        available = 0;
        flag = true;
        for(int m=1; m<=n; m++) {
            cin >> temp;
            available += temp - k;
            if(!flag) {
                continue;
            }
            if(available < 0) {
                flag = false;
                cout << "NO " << m << "\n";
            }
        }
        if(flag) {
            cout << "YES\n";
        }
    }
}

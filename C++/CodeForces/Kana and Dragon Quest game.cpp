#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,n,m;
    bool flag = false;
    cin >> t;
    while(t-- > 0) {
        cin >> x >> n >> m;
        flag = false;
        for(int i=0; i<n; i++) {
            if(x>(x/2+10)) {
                x = x/2+10;
            } else {
                break;
            }
            if(x<=0) {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if(!flag) {
            x -= m*10;
            if(x <= 0) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
}


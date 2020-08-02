#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,m,temp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        int a[n];
        bool p[n] = {0};
        flag = true;
        for(int i=0; i<n; i++) {
            cin >> temp;
            a[i] = temp;
        }
        for(int i=0; i<m; i++) {
            cin >> temp;
            p[temp-1] = true;
        }
        while(flag) {
            flag = false;
            for(int i=0; i<n-1; i++) {
                if(p[i] && a[i]>a[i+1]) {
                    flag = true;
                    swap(a[i],a[i+1]);
                }
            }
        }
        flag = true;
        for(int i=0; i<n-1; i++) {
            if(a[i]>a[i+1]) {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

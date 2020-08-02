#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,m;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        if(n%2==0) {
            cout << (n/2)*m << "\n";
        } else {
            if(m%2==0) cout << (n/2)*m+m/2 << "\n";
            else cout << (n/2)*m+m/2+1 << "\n";
        }
    }
}

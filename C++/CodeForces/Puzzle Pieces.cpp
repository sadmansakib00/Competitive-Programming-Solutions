#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,m;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        if(n==1 || m==1 || (n==2 && m==2)) cout << "YES\n";
        else cout << "NO\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,s;
    cin >> n >> s;
    if(n>=s-(n-1) || s-n<=n-1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for(int i=1; i<n; i++) {
            cout << "1 ";
        }
        cout << s-(n-1) << "\n" << n << "\n";
    }
}

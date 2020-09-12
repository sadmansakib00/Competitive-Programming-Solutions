#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, m;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        if(n>=6 && n%m==0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

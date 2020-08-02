#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,m;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        if(n==1) {
            cout << "0\n";
        } else if(n==2) {
            cout << m << "\n";
        } else {
            cout << 2*m << "\n";
        }
    }
}

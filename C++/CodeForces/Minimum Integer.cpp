#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(0);
    ll t,l,r,d,x;
    cin >> t;
    while(t-- > 0) {
        cin >> l >> r >> d;
        x=d;
        if(x<l) {
            cout << x << "\n";
            continue;
        }
        if(r%d==0)  x = r+d;
        else    x = r+d-r%d;
        cout << x << "\n";
    }
}

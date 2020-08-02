#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,a,b,c,cl,cr,r,space,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> c >> r;
        temp = a;
        a = min(a,b);
        b = max(temp,b);
        space = b-a;
        cl = c-r;
        cr = c+r;
        if(cl<=a && cr>=b) {
            cout << 0 << "\n";
        } else if(cl>=a && cr<=b) {
            cout << space-(cr-cl) << "\n";
        } else if(cl>=a && cr>b && cl<=b) {
            cout << space-(b-cl) << "\n";
        } else if(cl<a && cr<=b && cr>=a) {
            cout << space-(cr-a) << "\n";
        } else {
            cout << space << "\n";
        }
    }
}

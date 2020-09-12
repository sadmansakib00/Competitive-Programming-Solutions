#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define horsePower ios_base::sync_with_stdio(false);

int main() {
    horsePower;
    cin.tie(NULL);
    ull t,n,g,b,ans,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> g >> b;
        if(ceil(n/2.)<=g) {
            cout << n << "\n";
        } else {
            ans = (ull)ceil(n/2.);
            //cout << "Ans = " << ans << "\n";
            temp = ans%g;
            ans = ans/g;
            //cout << "Ans = " << ans << "\n";
            if(temp > 0) {
                ans = ans*g+ans*b+temp;
            } else {
                ans = ans*g+(ans-1)*b;
            }
            if(ans<n) {
                ans = n;
            }
            cout << ans << "\n";
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    LL t,a,b,ans,temp;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> a >> b;
        ans = 0;
        if(a==b) cout << "0\n";
        else {
            if(a>b) swap(a,b);
            while(a<b) {
                a *= 2;
                ans++;
            }
            if(a==b) {
                a = ans;
                ans = a/3;
                a = a%3;
                ans += a/2;
                a = a%2;
                ans += a;
            } else {
                ans = -1;
            }
            cout << ans << "\n";
        }
    }
}

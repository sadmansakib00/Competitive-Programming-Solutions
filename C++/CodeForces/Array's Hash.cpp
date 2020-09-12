#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int n,q,l,r,v,temp,ans;
    cin >> n >> ans;
    for(int i=1; i<n; i++) {
        cin >> temp;
        ans = temp-ans;
    }
    cin >> q;
    while(q-- > 0) {
        cin >> l >> r >> v;
        if((r-l+1)%2!=0) {
            if((n-r)%2!=0) ans-=v;
            else ans+=v;
        }
        cout << ans << "\n";
    }
}

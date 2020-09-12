#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,star;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int ans = 0;
        bool anArr[1000000];
        for(int m=0; m<n; m++) {
            cin >> star;
            if(!anArr[star]) {
                anArr[star] = true;
                ans += star;
            } else {
                anArr[star] = false;
                ans -= star;
            }
        }
        if(ans == 0)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }
}

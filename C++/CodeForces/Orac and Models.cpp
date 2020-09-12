#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,ans,tempAns;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int models[n+1],dp[n+1];
        ans=1;
        for(int i=1; i<=n; i++) {
            cin >> models[i];
            dp[i]=1;
        }
        for(int i=1; i<=n; i++) {
            for(int j=2*i; j<=n; j+=i) {
                if(models[j]>models[i]) {
                    dp[j] = max(dp[j],dp[i]+1);
                    ans = max(ans,dp[j]);
                }
            }
        }
        cout << ans << "\n";
    }
}

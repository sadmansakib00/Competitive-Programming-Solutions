#include<bits/stdc++.h>
using namespace std;
struct data {
    int a,b,c;
};
int main() {
    ios_base::sync_with_stdio(false);
    int n,a,b,c;
    cin >> n;
    vector<data> dp(n);
    for(int i=0; i<n; i++) {
        cin >> a >> b >> c;
        if(i==0) dp[i].a=a, dp[i].b=b, dp[i].c=c;
        else {
            dp[i].a = max(dp[i-1].b+a,dp[i-1].c+a);
            dp[i].b = max(dp[i-1].a+b,dp[i-1].c+b);
            dp[i].c = max(dp[i-1].a+c,dp[i-1].b+c);
        }
    }
    cout << max(dp[n-1].a,max(dp[n-1].b,dp[n-1].c)) << "\n";
}

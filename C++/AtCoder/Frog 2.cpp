#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    LL n,k;
    cin >> n >> k;
    LL a[n],dp[n]={0};
    for(int i=0; i<n; i++) {
        cin >> a[i];
        int j = i-k<=0?0:i-k;
        if(j<i) dp[i] = abs(dp[j]+abs(a[i]-a[j]));
        j++;
        for(;j<i;j++) {
            dp[i]=min(dp[i],dp[j]+abs(a[i]-a[j]));
        }
    }
    cout << dp[n-1] << "\n";
}

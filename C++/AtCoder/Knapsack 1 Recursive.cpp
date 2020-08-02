#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL dp[101][100001];
LL *val,*wgt;
LL knapsack(LL n, LL w) {
    if(n==0 || w==0) return 0;
    if(dp[n][w] == -1) {
        if(wgt[n-1]>w) {
            dp[n][w] = knapsack(n-1,w);
        } else {
            dp[n][w] = max(val[n-1]+knapsack(n-1,w-wgt[n-1]),
                           knapsack(n-1,w));
        }
    }
    return dp[n][w];
}
int main() {
    ios_base::sync_with_stdio(false);
    LL n,w;
    cin >> n >> w;
    val = new LL[n];
    wgt = new LL[n];
    for(int i=0; i<n; i++) cin >> wgt[i] >> val[i];
    memset(dp,-1,sizeof(dp));
    cout << knapsack(n,w) << "\n";
}


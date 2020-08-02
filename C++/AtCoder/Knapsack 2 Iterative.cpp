#include<bits/stdc++.h>
using namespace std;
#define INF 10e10
#define LL long long int
LL dp[100001];
int main() {
    ios_base::sync_with_stdio(false);
    int n,w,valSum=0;
    cin >> n >> w;
    int wgt[n+1],val[n+1];
    for(int i=1; i<100001; i++) dp[i] = INF;
    for(int i=1; i<=n; i++) {
        cin >> wgt[i] >> val[i];
        valSum += val[i];
    }
    for(int i=1; i<=n; i++) {
        for(int j=valSum; j>=val[i]; j--) {
            dp[j] = min(dp[j],dp[j-val[i]]+wgt[i]);
        }
    }
    for(int i=valSum; i>=0; i--) {
        if(dp[i]<=w) {
            cout << i << "\n";
            break;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL dp[101][100001];
int main() {
    ios_base::sync_with_stdio(false);
    LL n,w;
    cin >> n >> w;
    LL wgt[n+1],val[n+1];
    for(int i=1; i<=n; i++) cin >> wgt[i] >> val[i];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=w; j++) {
            if(wgt[i]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j]=max(val[i]+dp[i-1][j-wgt[i]],dp[i-1][j]);
        }
    }
    cout << dp[n][w] << "\n";
}

//A memory efficient solution is as follows
/*
#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    int n,w;
    cin >> n >> w;
    int wgt[n+1],val[n+1];
    for(int i=1; i<=n; i++) cin >> wgt[i] >> val[i];
    vector<LL> prev,cur;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=w; j++) {
            if(i==0 || j==0) cur.push_back(0);
            else {
                if(wgt[i]>j) cur.push_back(prev[j]);
                else cur.push_back(max(val[i]+prev[j-wgt[i]],prev[j]));
            }
        }
        prev = cur;
        cur.clear();
    }
    cout << prev[prev.size()-1] << "\n";
}
*/

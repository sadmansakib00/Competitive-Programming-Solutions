#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    LL n;
    cin >> n;
    LL arr[n],dp[n]={0};
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        if(i==1)    dp[i] = abs(arr[i]-arr[0]);
        if(i>1)
            dp[i] = min(dp[i-2]+abs(arr[i-2]-arr[i]),dp[i-1]+abs(arr[i-1]-arr[i]));
    }
    cout << dp[n-1] << "\n";
}

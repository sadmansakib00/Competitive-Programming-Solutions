#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
int main() {
    horsePower;
    int t,n,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = 0;
        int cumSum[n];
        short int aMap[n+1]={0};
        for(int i=0; i<n; i++) {
            cin >> cumSum[i];
            aMap[cumSum[i]]++;
            if(i>0) cumSum[i] += cumSum[i-1];
        }
        for(int i=1; i<n; i++) {
            for(int j=0; j+i<n; j++) {
                if(j==0) {
                    if(cumSum[i]<=n && aMap[cumSum[i]] > 0) {
                        ans += aMap[cumSum[i]];
                        aMap[cumSum[i]] = 0;
                    }
                } else {
                    if(cumSum[j+i]-cumSum[j-1]<=n && aMap[cumSum[j+i]-cumSum[j-1]] > 0) {
                        ans += aMap[cumSum[j+i]-cumSum[j-1]];
                        aMap[cumSum[j+i]-cumSum[j-1]] = 0;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
}

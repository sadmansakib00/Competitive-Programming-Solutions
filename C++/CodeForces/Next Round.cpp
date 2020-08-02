#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,k,ans=0;
    cin >> n >> k;
    ans = 0;
    int anArr[n];
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        if(i<k && anArr[i]!=0) {
            ans++;
        }
        if(i>=k && anArr[k-1]!=0 && anArr[i]==anArr[k-1]) {
            ans++;
        }
    }
    cout << ans << "\n";
}

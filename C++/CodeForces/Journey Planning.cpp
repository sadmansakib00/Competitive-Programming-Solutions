#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    LL n,temp,ans=0;
    cin >> n;
    unordered_map<LL,LL> aMap;
    for(int i=0; i<n; i++) {
        cin >> temp;
        aMap[temp-i]+=temp;
        ans = max(ans,aMap[temp-i]);
    }
    cout << ans << "\n";
}

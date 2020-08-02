#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,r,ans;
    double total;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> r;
        double anArr[n];
        ans=0, total=0;
        for(int i=0; i<n; i++) cin >> anArr[i];
        sort(anArr,anArr+n,greater<int>());
        for(int i=0; i<n; i++) {
            total+=anArr[i];
            //cout << "total = " << total << " and i+1 = " << i+1 << " and avg = " << total/(i+1) << "\n";
            if(total/(i+1)<r) {
                break;
            } else {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#define needed(h) (h*(3*h+1))/2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = 0;
        jump:
        int mid,lo=1,hi=26000;
        while(lo<hi) {
            mid = (lo+hi)/2;
            if(needed(mid)==n) {
                break;
            } else if(needed(mid)>n) {
                if(hi==mid)     hi=mid-1;
                else    hi=mid;
            }
            else {
                if(lo==mid)     lo=mid+1;
                else    lo=mid;
            }
        }
        if(needed(mid)<=n) {
            ans++;
            n-=needed(mid);
            if(n>=2) goto jump;
        }
        cout << ans << "\n";
    }
}

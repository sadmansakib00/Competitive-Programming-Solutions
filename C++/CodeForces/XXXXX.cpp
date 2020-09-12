#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    LL t,n,x,temp,cur,ans,firstNotZero;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        cur = 0;
        ans = firstNotZero = -1;
        for(LL i=0; i<n; i++) {
            cin >> temp;
            cur = (cur+temp)%x;
            if(cur != 0 && firstNotZero == -1) firstNotZero = i;
            if(cur!=0) {
                ans = i+1;
            } else {
                if(ans != -1) {
                    ans = max(ans,i-firstNotZero);
                }
            }
        }
        cout << ans << "\n";
    }
}

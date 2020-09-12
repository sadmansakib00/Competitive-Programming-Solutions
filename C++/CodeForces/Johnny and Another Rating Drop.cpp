#include<bits/stdc++.h>
using namespace std;
#define LL long long int
main() {
    ios_base::sync_with_stdio(false);
    LL t,n,ans,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = (n+1)/2;
        for(LL i=1; i<65; i++) {
            temp = round(pow(2,i));
            if(n>=temp) {
                ans += (1+i)*((n-temp)/(2*temp)+1);
            } else {
                break;
            }
        }
        cout << ans << "\n";
    }
}

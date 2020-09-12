#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    LL t,n,d,x,y,ans,temp;
    bool flag,flagTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x >> y >> d;
        ans = 0;
        temp = 0;
        flag = false;
        flagTwo = false;
        if(abs(x-y)%d==0) {
            cout << abs(x-y)/d << "\n";
        } else {
            if(abs(y-1)%d==0) {
                flag = true;
                if(abs(x-1)%d==0) {
                    ans += abs(x-1)/d;
                } else {
                    ans += abs(x-1)/d+1;
                }
                ans += abs(y-1)/d;
            }
            if(abs(y-n)%d==0) {
                flagTwo = true;
                if(abs(x-n)%d==0) {
                    temp += abs(x-n)/d;
                } else {
                    temp += abs(x-n)/d+1;
                }
                temp += abs(y-n)/d;
            }
            if(!flag && !flagTwo) {
                cout << "-1\n";
            } else if(flag && flagTwo) {
                ans = min(ans,temp);
                cout << ans << "\n";
            } else if(flag) {
                cout << ans << "\n";
            } else {
                cout << temp << "\n";
            }

        }
    }
}

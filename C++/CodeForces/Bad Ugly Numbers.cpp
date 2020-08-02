#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n==1) {
            cout << "-1\n";
        } else {
            int toggle = 0;
            string ans = "";
            long long int temp;
            if(n%2==0) {
                for(int i=0; i<n; i++) {
                    if(toggle==0) {
                        ans += "5";
                        toggle = 1;
                    } else {
                        ans += "9";
                        toggle = 0;
                    }
                }
                temp = (n/2)*5+(n/2)*9;
            } else {
                for(int i=0; i<n; i++) {
                    if(toggle==0) {
                        ans += "9";
                        toggle = 1;
                    } else {
                        ans += "5";
                        toggle = 0;
                    }
                }
                temp = (n/2 + 1)*9 + (n/2)*5;
            }
            if(temp%9==0) {
                ans[ans.length()-1] = '8';   //
            }
            /*
                Numbers are divisible by 8 if the number formed
                by the last three individual digits is evenly
                divisible by 8. For example, the last three
                digits of the number 3624 is 624, which is
                evenly divisible by 8 so 3624 is evenly
                divisible by 8.
            */

            //So 598 or 958 is never divisible by 8.
            cout << ans << "\n";
        }
    }
}

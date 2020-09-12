#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    string aStr,ans;
    bool zero;
    cin >> t;
    while(t-- > 0) {
        cin >> aStr;
        ans = "";
        zero = false;
        size_t foundZero = aStr.find('0');
        size_t foundOne = aStr.find('1');
        if(foundZero==string::npos || foundOne==string::npos) {
            cout << aStr << "\n";
        } else {
            ans += aStr[0];
            if(aStr[0] == '0') zero = true;
            for(int i=1; i<aStr.length(); i++) {
                if(aStr[i]=='0') {
                    if(zero) {
                        ans+="10";
                    } else {
                        ans+="0";
                    }
                    zero = true;
                } else {
                    if(zero) {
                        ans+="1";
                    } else {
                        ans+="01";
                    }
                    zero = false;
                }
            }
            if(ans.length()%2!=0) {
                if(zero) ans+="1";
                else ans+="0";
            }
            cout << ans << "\n";
        }
    }
}

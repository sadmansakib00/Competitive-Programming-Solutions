#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,a,b;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string aStr,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> a >> b;
        aStr = alphabet.substr(0,b);
        ans = "";
        //cout << aStr << "\n";
        for(int i=0; i<n/b; i++) ans+=aStr;
        if(n%b!=0) {
            ans+=aStr.substr(0,n%b);
        }
        cout << ans << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,k,ans,temp;
    string s;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> k >> s;
        ans=0,temp=0;
        flag = false;
        for(int i=0; i<k; i++) {
            if(s[i]=='A') {
                ans = max(ans,temp);
                temp=0;
                flag = true;
            } else if(flag) {
                temp++;
            }
        }
        if(flag) ans = max(ans,temp);
        cout << ans << "\n";
    }
}

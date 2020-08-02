#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,q,c;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> q >> s;
        int occurrence[26]{0};
        for(int i=0; i<s.length(); i++) {
            occurrence[s[i]-'a']++;
        }
        while(q-- > 0) {
            cin >> c;
            int ans = 0;
            for(int i=0; i<26; i++) {
                if(occurrence[i]>c) ans+=(occurrence[i]-c);
            }
            cout << ans << "\n";
        }
    }
}

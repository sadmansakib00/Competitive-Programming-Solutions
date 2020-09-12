#include<bits/stdc++.h>
using namespace std;
#define lld long long int
int main() {
    ios_base::sync_with_stdio(false);
    lld t,n,m,temp;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        cin >> s;
        int flag[200001] = {0};
        lld ans[26] = {0};
        lld tillNow[26] = {0};
        for(int i=0; i<m; i++) {
            cin >> temp;
            flag[temp-1]++;
        }
        for(int i=0; i<s.length(); i++) {
            tillNow[s[i]-'a']++;
            ans[s[i]-'a']++;
            if(flag[i]>0) {
                for(int j=0; j<26; j++) {
                    ans[j] += tillNow[j]*flag[i];
                }
            }
        }
        for(int i=0; i<25; i++) {
            cout << ans[i] << " ";
        }
        cout << ans[25] << "\n";
    }
}

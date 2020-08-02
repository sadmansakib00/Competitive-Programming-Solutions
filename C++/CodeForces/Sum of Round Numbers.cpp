#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t;
    string n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<int> ans;
        for(int i=0; i<n.length(); i++) {
            if(n[i]=='0') continue;
            else {
                ans.push_back(round((n[i]-'0')*pow(10,n.length()-(i+1))));
            }
        }
        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++) {
            if(i!=0) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }
}

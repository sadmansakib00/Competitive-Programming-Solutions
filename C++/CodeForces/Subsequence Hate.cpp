#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define PII pair<int,int>
#define PPII pair<PII,PII>
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t,ones,zeroes,ans;
    string aStr;
    cin >> t;
    while(t-- > 0) {
        cin >> aStr;
        vector<PPII> v(aStr.length());
        ones=zeroes=0,ans=INT_MAX;
        for(int i=0; i<aStr.length(); i++) {
            v[i].ff = {zeroes,ones};
            if(aStr[i]=='0')  zeroes++;
            else    ones++;
        }
        ones=zeroes=0;
        for(int i=aStr.length()-1; i>=0; i--) {
            if(aStr[i]=='0')    zeroes++;
            else    ones++;
            v[i].ss = {zeroes,ones};
        }
        for(int i=0; i<aStr.length(); i++) {
            ans = min(ans,min(v[i].ff.ff,v[i].ff.ss)+min(v[i].ss.ff,v[i].ss.ss));
        }
        cout << ans << "\n";
    }
}

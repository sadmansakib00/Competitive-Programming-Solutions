#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define PB push_back
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t,ans;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        ans = INT_MAX;
        int one=0,two=0,three=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='1')
                one = i+1;
            else if(s[i]=='2')
                two = i+1;
            else
                three = i+1;
            if(one && two && three)
                ans = min(ans,i-min(one,min(two,three))+2);
        }
        if(ans == INT_MAX)
            cout << "0\n";
        else
            cout << ans << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<int> v;
        vector<int> ans;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),greater<int>());
        temp = 0;
        for(int j=v.size()-1; temp<j; temp++,j--) {
            ans.push_back(v[temp]);
            ans.push_back(v[j]);
        }
        if(n%2!=0) ans.push_back(v[temp]);
        for(int i=n-1; i>=0; i--) {
            if(i<n-1) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }
}

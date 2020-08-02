#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,temp,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = 0;
        map<int,int> aMap;
        map<int,int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap[temp]++;
        }
        temp = 0;
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            ans += (temp+it->second)/it->first;
            temp = (temp+it->second)%it->first;
        }
        cout << ans << "\n";
    }
}

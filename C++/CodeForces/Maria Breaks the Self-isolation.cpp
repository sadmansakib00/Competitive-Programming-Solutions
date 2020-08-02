#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,temp,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        map<int,int> aMap;
        map<int,int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap[temp]++;
        }
        ans = 1;
        temp = 0;
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->second-1+ans+temp >= it->first) {
                ans+=it->second+temp;
                temp = 0;
            } else {
                temp += it->second;
            }
        }
        cout << ans << "\n";
    }
}

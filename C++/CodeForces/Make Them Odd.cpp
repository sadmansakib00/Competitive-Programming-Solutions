#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,temp,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = 0;
        set<int> aSet;
        while(n-- > 0) {
            cin >> temp;
            if(temp%2==0) aSet.insert(temp);
        }
        while(aSet.size()>0) {
            ans++;
            temp = *aSet.rbegin();
            aSet.erase(temp);
            if((temp/2)%2==0) aSet.insert(temp/2);
        }
        cout << ans << "\n";
    }
}

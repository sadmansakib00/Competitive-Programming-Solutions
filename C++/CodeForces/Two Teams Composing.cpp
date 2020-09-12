#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,temp,maxx;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        maxx = INT_MIN;
        set<int> aSet;
        map<int,int> aMap;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aSet.insert(temp);
            aMap[temp]++;
            if(aMap[temp]>maxx) {
                maxx = aMap[temp];
            }
        }
        temp = aSet.size();
        cout << max(min(temp-1,maxx),min(temp,maxx-1)) << "\n";
    }
}

#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t,n,q,qt,x,y;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> q;
        set<int> aSet;
        unordered_map<int,int> ocur;
        unordered_map<int,int> arr;
        for(int i=1; i<=n; i++) {
            cin >> x;
            ocur[x]++;
            arr[i] = x;
            if(x!=0)
                aSet.insert(x);
        }
        while(q-- > 0) {
            cin >> qt;
            if(qt==1) {
                cin >> x >> y;
                ocur[arr[x]]--;
                if(arr[x]!=0 && ocur[arr[x]]==0) aSet.erase(arr[x]);
                arr[x] = y;
                if(y!=0 && ocur[y]==0) aSet.insert(y);
                ocur[y]++;
            } else {
                cout << aSet.size() << "\n";
            }
        }
    }
}

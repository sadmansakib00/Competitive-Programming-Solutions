#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,s,k,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s >> k;
        set<int> aSet;
        set<int>::iterator it;
        for(int i=0; i<k; i++) {
            cin >> temp;
            aSet.insert(temp);
        }
        for(int i=s,j=s+1; i>0 || j<=n; i--,j++) {
            if(i>0) {
                it = aSet.find(i);
                if(it == aSet.end()) {
                    temp = i;
                    break;
                }
            }
            if(j<=n) {
                it = aSet.find(j);
                if(it == aSet.end()) {
                    temp = j;
                    break;
                }
            }
        }
        temp = abs(temp-s);
        cout << temp << "\n";
    }
}

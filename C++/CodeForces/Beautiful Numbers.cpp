#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main() {
    horsePower;
    ll t,n,maxPos,minPos,temp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ll pos[n+1];
        for(int i=0; i<n; i++) {
            cin >> temp;
            pos[temp]=i;
        }
        maxPos = pos[1];
        minPos = pos[1];
        cout << 1;
        for(int i=2; i<=n; i++) {
            maxPos = max(maxPos,pos[i]);
            minPos = min(minPos,pos[i]);
            if(maxPos-minPos+1==i) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << "\n";
    }
}

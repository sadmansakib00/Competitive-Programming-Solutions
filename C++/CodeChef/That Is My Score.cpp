#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,p,s,total;
    int anArr[12];
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        total = 0;
        memset(anArr,0,sizeof(anArr));
        for(int i=1; i<=n; i++) {
            cin >> p >> s;
            anArr[p] = max(anArr[p],s);
        }
        for(int i=1; i<9; i++) {
            total += anArr[i];
        }
        cout << total << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,h,m,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> h >> m;
        ans = (23-h)*60+(60-m);
        cout << ans << "\n";
    }
}

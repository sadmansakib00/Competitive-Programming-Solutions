#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long long int m,n,ans;
    cin >> m >> n;
    ans = m*n;
    if(ans%2 == 0)
        cout <<ans/2<< "\n";
    else
        cout << ans/2 + 1 << "\n";
}

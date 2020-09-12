#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int n,m,c,x,y,p,upper=0,lower=0,riverY;
    cin >> n >> m >> c;
    for(int i=0; i<n; i++) {
        cin >> x >> y >> p;
        riverY = m*x+c;
        if(y>riverY) {
            upper += p;
        } else {
            lower += p;
        }
    }
    cout << max(upper,lower) << "\n";
}

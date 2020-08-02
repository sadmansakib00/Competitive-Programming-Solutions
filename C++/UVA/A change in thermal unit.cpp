#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t;
    double init,change;
    cin >> t;
    cout << fixed << setprecision(2);
    for(int m=1; m<=t; m++) {
        cin >> init >> change;
        init = (9*init)/5+32;
        init += change;
        init = ((init-32)*5)/9;
        cout << "Case " << m << ": " << init << "\n";
    }
}

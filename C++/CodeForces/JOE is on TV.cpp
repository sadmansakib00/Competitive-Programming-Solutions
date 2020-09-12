#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    double n,total=0;
    cin >> n;
    for(; n>0; n--) {
        total += 1/n;
    }
    cout << fixed << setprecision(12) << total << "\n";
}

#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,k,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        total = (n/k)*k;
        n = n-total;
        if(k/2 >= n) {
            total += n;
        } else {
            total += k/2;
        }
        cout << total << "\n";
    }
}

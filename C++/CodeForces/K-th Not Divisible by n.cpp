#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,k;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        cout << k+((k-1)/(n-1)) << "\n";
    }
}
/*
1 2 4 5 7 8 10 11 13 14 16 17 19 20 22 23 25
1 2 3 4 5 6 7  8  9  10 11 12 13 14 15 16 17
*/

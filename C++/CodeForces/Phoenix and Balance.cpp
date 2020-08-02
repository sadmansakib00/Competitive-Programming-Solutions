#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define setPre(x) cout << fixed << setprecision(x);
#define sumOfN(n) ((ll)n*(n+1))/2
#define PLL pair<ll,ll>
#define PDL pair<double,ll>
#define VPDL vector<PDL>

int main() {
    horsePower;
    int t,n,cost;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cost = pow(2,n)-pow(2,n-1);
        n-=2;
        for(int i=1; i<=n; i++) {
            if(i>n/2) cost -= pow(2,i);
            else cost += pow(2,i);
        }
        cost = abs(cost);
        cout << cost << "\n";
    }
}

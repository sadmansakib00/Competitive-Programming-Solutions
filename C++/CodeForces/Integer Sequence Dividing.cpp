#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sumOfN(n) ((ll)(n)*(n+1))/2
int main() {
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    cout << sumOfN(n)%2 << "\n";
}

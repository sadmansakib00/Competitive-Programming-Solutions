#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

#define MOD 1000000007
unordered_map<ll,ll> aMap;


ll modFib(ll n) {
    if(n<2) return 1;
    if(aMap.find(n)!=aMap.end()) {
        return aMap[n];
    }
    aMap[n] = (modFib((n+1)/2)*modFib(n/2)+modFib((n-1)/2)*modFib((n-2)/2))%MOD;
    return aMap[n];
}

int main() {
    horsePower;
    ll n;
    cin >> n;
    n--;
    if(n<2) {
        cout << n << "\n";
    } else {
        cout << modFib(n) << "\n";
    }
}

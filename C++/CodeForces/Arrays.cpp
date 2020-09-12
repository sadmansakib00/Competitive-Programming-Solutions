#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

int main() {
    horsePower;
    ll a,b,k,m;
    cin >> a >> b >> k >> m;
    a++;
    b++;
    ll arrOne[a];
    ll arrTwo[b];
    for(int i=1; i<a; i++) {
        cin >> arrOne[i];
    }
    for(int i=1; i<b; i++) {
        cin >> arrTwo[i];
    }
    if(arrOne[k]<arrTwo[b-m]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

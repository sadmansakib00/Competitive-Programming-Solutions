#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
int nineCount(ll n) {
    int temp = 0;
    string aStr = to_string(n);
    n = n+1;
    string anotherStr = to_string(n);
    if(aStr.length() != anotherStr.length()) {
        temp++;
    }
    n--;
    while(n>9) {
        n = n/10;
        temp++;
    }
    return temp;
}

int main() {
    horsePower;
    ll t, a, b, nCount;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        nCount = nineCount(b);
        cout << a*nCount << "\n";
    }
}

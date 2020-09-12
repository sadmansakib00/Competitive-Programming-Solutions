#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main() {
    horsePower;
    int t,a,b,press;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        a = abs(a-b);
        press = a/5;
        a = a%5;
        press += a/2;
        a = a%2;
        press += a;
        cout << press << "\n";
    }
}

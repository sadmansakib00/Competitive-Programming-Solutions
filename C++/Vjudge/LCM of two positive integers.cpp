#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {
    return b==0? a : gcd(b,a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    long a,b,gcdOfAB;
    cin >> a >> b;
    gcdOfAB = gcd(a,b);
    cout << gcdOfAB*(a/gcdOfAB)*(b/gcdOfAB) << "\n";
}

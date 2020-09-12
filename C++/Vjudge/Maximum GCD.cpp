#include<bits/stdc++.h>
using namespace std;
int gcd(int i, int j) {
    return j==0 ? i : gcd(j,i%j);
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,a,b,maxx;
    string aStr;
    stringstream ss;
    getline(cin, aStr);
    ss << aStr;
    ss >> t;
    ss.clear();
    while(t-- > 0) {
        getline(cin , aStr);
        stringstream ss(aStr);
        ss >> a;
        ss >> b;
        maxx = gcd(a,b);
        while(ss >> b) {
            a = gcd(a,b);
            maxx = max(a,maxx);
        }
        cout << a << "\n";
    }
}

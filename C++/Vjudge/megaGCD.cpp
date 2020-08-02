#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b==0 ? a : gcd(b,a%b);
}
int main() {
    ios_base::sync_with_stdio(false);
    string aStr;
    getline(cin,aStr);
    stringstream ss(aStr);
    int a,b;
    ss >> a;
    while(ss >> b) {
        a = gcd(a,b);
    }
    cout << a << "\n";
}

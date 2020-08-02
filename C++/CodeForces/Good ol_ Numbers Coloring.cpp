#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if(a==0)
        return b;
    return gcd(b%a, a);
}
int divisors(int a, int b) {
    int gcdOfAB = gcd(a,b);
    int total = 0;
    for(int m=1; m<=sqrt(gcdOfAB); m++) {
         if(gcdOfAB%m==0) {
            if(gcdOfAB/m==m)
                total+=1;
            else
                total += 2;
         }
    }
    return total;
}
int main() {
    ios_base::sync_with_stdio(false);
    int test,a,b;
    cin >> test;
    while(test-- > 0) {
        cin >> a >> b;
        int check = divisors(a,b);
        if(check==1) {
            cout << "Finite\n";
        } else {
            cout << "Infinite\n";
        }
    }
}

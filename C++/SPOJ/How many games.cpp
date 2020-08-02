#include <bits/stdc++.h>
using namespace std;
int countGCD(int n, int d) {
    return d == 0 ? n : countGCD(d, n%d);
}
int main() {
    ios_base::sync_with_stdio(false);
    int tests,numerator,denominator,gcd,counter,len;
    bool flag;
    cin >> tests;
    string aStr;
    double testCase;
    while(tests-- > 0) {
        cin >> aStr;
        flag = true;
        numerator = 0;
        counter = 0;
        denominator = 1;
        len = aStr.length();
        for(int m=0; m<len; m++) {
            if(aStr[m]=='.') {
                flag = false;
                continue;
            }
            numerator = numerator*10 + aStr[m]-'0';
            if(flag)
                ++counter;
        }
        for(int m=1; m<len-counter; m++)
            denominator *= 10;
        gcd = countGCD(numerator,denominator);
        cout << denominator/gcd << "\n";
    }
}

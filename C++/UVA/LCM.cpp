#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;
int GCD(ulli n,ulli d) {
    return d == 0 ? n : GCD(d,n%d);
}
int LCM(ulli a,ulli b) {
    return (a*b)/GCD(a,b);
}
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int tests; cin >> tests;
    ulli a; string aStr;
    while(tests != 0) {
        a = 1;
        for(ulli m=2; m<=tests; m++) {
            a = LCM(a,m);
        }
        cout << a << "\n";
        aStr = to_string(a);
        for(ulli m=aStr.length()-1; m>=0; m--) {
            if((char)aStr[m] != '0') {
                cout << aStr[m] << endl;
                break;
            }
        }
        cin >> tests;
    }
}

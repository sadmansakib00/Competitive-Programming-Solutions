#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests,n;
    long long int sum = 0;
    string aStr = "";
    for(int m = 0; m<=10000; m++) {
        aStr += to_string(m);
        if(aStr.length() > 10002) {
            break;
        }
    }
    cin >> tests;
    while(tests-- > 0) {
        cin >> n;
        sum += aStr[n]-'0';
    }
    cout << sum << "\n";
}

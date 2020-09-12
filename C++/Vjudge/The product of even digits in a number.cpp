#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long long int prod = 1;
    string aStr;
    cin >> aStr;
    for(int m=0; m<aStr.length(); m++) {
        if(aStr[m] == '-') {
            continue;
        } else {
            int temp = aStr[m] - '0';
            if(temp%2==0) {
                prod *= temp;
            }
        }
    }

    if(prod == 1) {
        cout << -1 << "\n";
    } else {
        cout << prod << "\n";
    }
}

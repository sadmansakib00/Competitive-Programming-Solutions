#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string aStr;
    cin >> aStr;
    for(int m=aStr.length()-1; m>=0; m--) {
        cout << aStr[m];
    }
    cout << "\n";
}

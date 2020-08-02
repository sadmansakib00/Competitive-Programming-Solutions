#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int sum=0;
    string aStr;
    cin >> aStr;
    for(int m=0; m<aStr.length(); m++) {
        if(aStr[m]=='-')
            continue;
        sum += aStr[m]-'0';
    }
    cout << sum << "\n";
}

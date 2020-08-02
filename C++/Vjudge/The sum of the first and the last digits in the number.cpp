#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int sum = 0;
    string aStr;
    cin >> aStr;
    aStr[0]=='-' ? sum = aStr[1]-'0'+aStr[aStr.length()-1]-'0' : sum = aStr[0]-'0'+aStr[aStr.length()-1]-'0';
    cout << sum << "\n";
}

#include <bits/stdc++.h>
using namespace std;
bool palindrome(string aStr) {
    bool flag = true;
    for(int m=0; m<aStr.length()/2; m++) {
        if(aStr[m] != aStr[aStr.length()-m-1]) {
            flag = false;
            break;
        }

    }
    return flag;
}
int main() {
    ios_base::sync_with_stdio(false);
    string aStr;
    cin >> aStr;
    if(palindrome(aStr)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

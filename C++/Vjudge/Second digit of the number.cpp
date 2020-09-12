#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string aStr;
    cin >> aStr;
    int temp = 0;
    for(int m=0; m<aStr.length(); m++) {
        if(aStr[m] == '-') {
            continue;
        } else {
            ++temp;
            if(temp==2) {
                cout << aStr[m] << "\n";
                break;
            }
        }
    }
}

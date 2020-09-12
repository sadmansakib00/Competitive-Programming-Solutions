#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    unsigned int tests,temp,total = 0;
    cin >> tests;
    string aStr;
    while(tests-- > 0) {
        cin >> aStr;
        if(aStr == "donate") {
            cin >> temp;
            total += temp;
        } else
            cout << total << "\n";
    }
}

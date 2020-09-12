#include <bits/stdc++.h>
using namespace std;
void setUp(string anArr[], string aStr) {
    for(int m=0,n=0; m<16; m++,n++) {
        while((int)aStr[n] != 32) {
            anArr[m] += aStr[n];
            n++;
            if(n==aStr.length())
                break;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    string anArr[16];
    setUp(anArr,"Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you");
    int tests;
    bool flag = false;
    cin >> tests;
    string names[tests];
    for(int m=0; m<tests; m++)
        cin >> names[m];
    for(int m=0; m<tests; ) {
        if(flag)
            break;
        for(int n=0; n<16; n++) {
            if(m==tests) {
                m=0;
                flag = true;
            }
            cout << names[m] << ": " << anArr[n] << "\n";
            ++m;
        }
    }
}

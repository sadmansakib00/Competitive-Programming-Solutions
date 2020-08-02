#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int anArr[26];
    for(int m=0,n=1; m<26; m++,n++) {
        if(m==18 || m==25) {
            anArr[m] = 4;
            n = 0;
            continue;
        }
        if(n>3) {
            n = 1;
        }
        anArr[m] = n;
    }
    int t,total;
    string aStr;
    cin >> t;
    cin.ignore();
    for(int m=1; m<=t; m++) {
        total = 0;
        getline(cin,aStr);
        for(int i=0; i<aStr.length(); i++) {
            if(aStr[i]==' ') {
                total += 1;
            } else {
                total += anArr[aStr[i]-'a'];
            }
        }
        cout << "Case #" << m << ": " << total << "\n";
    }
}

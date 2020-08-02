#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t;
    string aStr,fil,jap,kor;
    cin >> t;
    while(t-- > 0) {
        fil = "";
        jap = "";
        kor = "";
        cin >> aStr;
        fil = aStr.substr(aStr.length()-2,2);
        if(aStr.length() >= 4)
            jap = aStr.substr(aStr.length()-4,4);
        if(aStr.length() >= 5)
            kor = aStr.substr(aStr.length()-5,5);
        if(fil == "po") {
            cout << "FILIPINO\n";
        } else if(jap == "desu" || jap == "masu") {
            cout << "JAPANESE\n";
        } else if(kor == "mnida") {
            cout << "KOREAN\n";
        }
    }
}

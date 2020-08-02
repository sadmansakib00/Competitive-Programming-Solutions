#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    s = s.substr(1,6);
    n = stoi(s);
    if(n%2==0) {
        cout << "0\n";
    } else {
        cout << "1\n";
    }
}

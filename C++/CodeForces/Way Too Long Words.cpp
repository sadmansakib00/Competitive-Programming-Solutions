#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        if(s.length()>10) {
            cout << s[0] << s.length()-2 << s[s.length()-1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
}

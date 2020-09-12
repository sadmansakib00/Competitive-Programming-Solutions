#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,total,last;
    string s;
    bool flag,secondF;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        total = 0;
        last = 0;
        flag = false;
        for(int i=s.length()-1; i>-1; i--) {
            if(s[i]=='1') {
                last = i;
                break;
            }
        }
        for(int i=0; i<last; i++) {
            if(s[i] == '1') {
                flag = true;
            }
            if(flag) {
                if(s[i]=='0') {
                    total++;
                }
            }
        }
        cout << total << "\n";
    }
}

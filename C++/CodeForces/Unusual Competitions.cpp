#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,open=0,close=0,ans=0;
    string s;
    bool flag = false;
    cin >> n >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='(' && !flag) open++;
        else if(s[i]==')' && !flag) {
            if(open>0) {
                open--;
            } else {
                flag = true;
                close++;
            }
        } else {
            if(s[i]==')') close++;
            else open++;
            if(open>0 && close>0) {
                ans+=2;
                open--; close--;
            }
            if(open==0 && close==0) flag = false;
        }
    }
    if(open==0 && close==0) {
        cout << ans << "\n";
    } else {
        cout << "-1\n";
    }
}

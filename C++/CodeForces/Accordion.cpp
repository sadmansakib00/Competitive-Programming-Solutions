#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int firstColon=INT_MAX,secondColon=INT_MIN,ans=4;
    string s;
    bool open=false,close=false,flag=false;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='[') open=true;
        if(open && s[i]==':') {
            firstColon = i;
            break;
        }
    }
    for(int i=s.length()-1; i>firstColon; i--) {
        if(s[i]==']') close=true;
        if(close && s[i]==':') {
            secondColon=i;
            break;
        }
    }
    for(firstColon; firstColon<secondColon; firstColon++) {
        flag = true;
        if(s[firstColon]=='|') ans++;
    }
    if(flag) cout << ans << "\n";
    else cout << "-1\n";
}

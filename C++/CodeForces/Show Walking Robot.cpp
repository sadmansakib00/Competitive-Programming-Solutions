#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,l,r,u,d;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        l=0,r=0,u=0,d=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='L') l++;
            else if(s[i]=='R') r++;
            else if(s[i]=='U') u++;
            else d++;
        }
        if(min(u,d)>min(l,r)) {
            u = min(u,d);
            l = min(l,r);
            if(l==0 && u>0) u=1;
            cout << 2*u+2*l << "\n";
            for(int i=0; i<u; i++) cout << "U";
            for(int i=0; i<l; i++) cout << "R";
            for(int i=0; i<u; i++) cout << "D";
            for(int i=0; i<l; i++) cout << "L";
            cout << "\n";
        } else {
            u = min(u,d);
            l = min(l,r);
            if(u==0 && l>0) l=1;
            cout << 2*u+2*l << "\n";
            for(int i=0; i<l; i++) cout << "R";
            for(int i=0; i<u; i++) cout << "U";
            for(int i=0; i<l; i++) cout << "L";
            for(int i=0; i<u; i++) cout << "D";
            cout << "\n";
        }
    }
}

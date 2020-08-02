#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    bool flag,anotherFlag;
    string x;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        string a="";
        string b="";
        flag = true; anotherFlag = true;
        for(int i=0; i<x.length(); i++) {
            if(i!=0 && !flag && (x[i]=='2' || x[i]=='0' || x[i-1]=='1')) {
                anotherFlag = false;
            }
            if(x[i]!='2' && x[i]!='0') flag = false;
            if(x[i]=='2') {
                if(i==0 || flag) {
                    a+="1";
                    b+="1";
                } else {
                    a+="0";
                    b+="2";
                }
            } else if(x[i]=='1') {
                if(anotherFlag) {
                    a+="1";
                    b+="0";
                } else {
                    a+="0";
                    b+="1";
                }
            } else {
                a+="0";
                b+="0";
            }
        }
        cout << a << "\n" << b << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,zero=0,one=0,two=0,tempTwoCount=0;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++) {
        if(s[i]=='0') zero++;
        else if(s[i]=='1') one++;
        else two++;
    }
    if(zero==one && one==two) {
        cout << s << "\n";
    } else {
        //cout << "zero = " << zero << " one = " << one << " two = " << two << "\n";
        for(int i=0; i<n; i++) {
            if(zero<n/3) {
                if(s[i]!='0') {
                    if(s[i]=='1') {
                        if(one>n/3) {
                            s[i]='0';
                            one--;
                            zero++;
                        }
                    } else {
                        if(two>n/3) {
                            s[i]='0';
                            two--;
                            zero++;
                        }
                    }
                }
            } else {
                break;
            }
        }
        //cout << "zero = " << zero << " one = " << one << " two = " << two << "\n";
        for(int i=n-1; i>=0; i--) {
            if(two<n/3) {
                if(s[i]!='2') {
                    if(s[i]=='0') {
                        if(zero>n/3) {
                            s[i]='2';
                            zero--;
                            two++;
                        }
                    } else {
                        if(one>n/3) {
                            s[i]='2';
                            one--;
                            two++;
                        }
                    }
                }
            } else {
                break;
            }
        }
        //cout << "zero = " << zero << " one = " << one << " two = " << two << "\n";
        for(int i=n-1; i>=0; i--) {
            if(s[i]=='2') tempTwoCount++;
            if(one<n/3) {
                if(s[i]!='1') {
                    if(s[i]=='0') {
                        if(zero>n/3) {
                            s[i]='1';
                            zero--;
                            one++;
                        }
                    } else {
                        if(two>n/3 && tempTwoCount>n/3) {
                            s[i]='1';
                            two--;
                            one++;
                        }
                    }
                }
            } else {
                break;
            }
        }
        //cout << "zero = " << zero << " one = " << one << " two = " << two << "\n";
        cout << s << "\n";
    }
}

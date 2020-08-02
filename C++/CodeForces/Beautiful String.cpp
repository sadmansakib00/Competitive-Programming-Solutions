#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t;
    string aStr;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> aStr;
        flag =  false;
        if(aStr.length()>1) {
            for(int i=0; i<aStr.length(); i++) {
                if(i==0) {
                    if(aStr[0]=='?' && (aStr[1]=='?' || aStr[1]=='b' || aStr[1]=='c')) {
                        aStr[0] = 'a';
                    } else if(aStr[0]=='?' && (aStr[1]=='a' || aStr[1]=='c')) {
                        aStr[0] = 'b';
                    } else if(aStr[0]=='?' && (aStr[1]=='a' || aStr[1]=='b')) {
                        aStr[0] = 'c';
                    }
                } else if(i<aStr.length()-1) {
                    if(aStr[i]=='?') {
                        if((aStr[i-1]=='a' || aStr[i-1]=='b') && (aStr[i+1]=='a' || aStr[i+1]=='b' || aStr[i+1]=='?')) {
                            aStr[i] = 'c';
                        } else if((aStr[i-1]=='a' || aStr[i-1]=='c') && (aStr[i+1]=='a' || aStr[i+1]=='c' || aStr[i+1]=='?')) {
                            aStr[i] = 'b';
                        } else if((aStr[i-1]=='b' || aStr[i-1]=='c') && (aStr[i+1]=='b' || aStr[i+1]=='c' || aStr[i+1]=='?')) {
                            aStr[i] = 'a';
                        }
                    } else {
                        if(aStr[i]==aStr[i-1] || aStr[i]==aStr[i+1]) {
                            flag = true;
                            break;
                        }
                    }
                } else {
                    if(aStr[i]=='?') {
                        if(aStr[i-1]=='a' || aStr[i-1]=='b') {
                            aStr[i] = 'c';
                        } else if(aStr[i-1]=='a' || aStr[i-1]=='c') {
                            aStr[i] = 'b';
                        } else if(aStr[i-1]=='b' || aStr[i-1]=='c') {
                            aStr[i] = 'a';
                        }
                    } else {
                        if(aStr[i]==aStr[i-1]) {
                            flag = true;
                            break;
                        }
                    }
                }
            }
        } else {
            if(aStr[0]=='?') {
                aStr[0] = 'a';
            }
        }
        if(flag) {
            cout << "-1\n";
        } else {
            cout << aStr << "\n";
        }
    }
}

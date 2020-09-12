#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    int k,snow=0,candy=0,actualString;
    string s;
    cin >> s >> k;
    for(int i=0; i<s.length(); i++) {
        if(s[i]=='*') snow++;
        if(s[i]=='?') candy++;
    }
    actualString = s.length()-snow-candy;
    if(actualString==k) {
        for(int i=0; i<s.length(); i++) {
            if(s[i]!='*' && s[i]!='?') cout << s[i];
        }
    } else if(actualString<k) {
        if(snow>0) {
            for(int i=0; i<s.length(); i++) {
                if(s[i]=='*') {
                    while(actualString<k) {
                        cout << s[i-1];
                        actualString++;
                    }
                } else if(s[i]!='?') {
                    cout << s[i];
                }
            }
        } else {
            cout << "Impossible";
        }
    } else {
        if(actualString-snow-candy<=k) {
            int gottaRemove = actualString-k;
            for(int i=0,j=0; i<s.length()-1; i++) {
                if((s[i+1]=='*' || s[i+1]=='?') && gottaRemove>0) {
                    gottaRemove--;
                } else {
                    if(s[i]!='*' && s[i]!='?') {
                        cout << s[i];
                    }
                }
            }
            if(s[s.length()-1]!='*' && s[s.length()-1]!='?') cout << s[s.length()-1];
        } else {
            cout << "Impossible";
        }
    }
    cout << "\n";
}

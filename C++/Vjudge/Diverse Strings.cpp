#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tests; cin>>tests;
    while(tests>0) {
        --tests;
        string aStr; cin >> aStr;
        int strLen = aStr.length();
        int anArr[26]{0};
        bool flag = false;
        for(int m=0; m<strLen; m++) {
            if(anArr[aStr[m]-97]==0)
                anArr[aStr[m]-97]=aStr[m];
            else {
                cout<<"No\n";
                flag = true;
                break;
            }
        }
        if(flag)
            continue;
        sort(anArr, anArr+26);
        for(int m=0; m<25; m++) {
            if(anArr[m]==0)
                continue;
            if(anArr[m+1]-anArr[m]>1 || anArr[m+1]-anArr[m]<1) {
                cout<<"No\n";
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"Yes\n";
    }
}

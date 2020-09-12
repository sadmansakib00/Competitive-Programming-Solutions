#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main() {
    string aStr;
    int temp;
    bool marker;
    while(getline(cin,aStr)) {
        marker = true;
        temp = aStr.length();
        int flag[91]={0};
        for(int m=0; m<temp; m++) {
            if((int)aStr[m]==32)
                continue;
            flag[toupper(aStr[m])]=1;
        }
        for(int m=65; m<91; m++) {
            if(flag[m] != 1) {
                marker = false;
                break;
            }
        }
        if(marker)
            cout<<"pangram\n";
        else
            cout<<"not pangram\n";
    }
}

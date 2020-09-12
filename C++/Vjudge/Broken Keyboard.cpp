#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string aStr,temp,homeStr;
    int flag;
    while(getline(cin,aStr)) {
        temp = "";
        flag = true;
        homeStr = "";
        for(int m=0; m<aStr.length(); m++) {
            if(aStr[m] == '[') {
                temp = homeStr + temp;
                homeStr = "";
                flag = false;
                continue;
            } else if(aStr[m] == ']') {
                if(!flag) {
                    temp = homeStr + temp;
                    homeStr = "";
                }
                flag = true;
                continue;
            }
            if(flag) {
                temp = temp + aStr[m];
            } else {
                homeStr = homeStr + aStr[m];
            }
        }
        if(!flag) {
            temp = homeStr + temp;
        }
        cout << temp << "\n";
    }
}

#include <iostream>
using namespace std;

bool palindromeCheck(string aStr) {
    int len = aStr.size();
    bool flag = true;
    string properStr = "";
    for(int m=0; m<len; m++) {
        if((aStr[m]>64 && aStr[m]<91) || (aStr[m]>96 && aStr[m])) {
            properStr += aStr[m];
        }
    }
    len = properStr.size();
    for(int m=0; m<len/2; m++) {
        if(toupper(properStr[m])!=toupper(properStr[len-1-m]))
            flag = false;
    }
    return flag;
}
int main() {
    string aStr;
    getline(cin,aStr);
    while(aStr != "DONE") {
        if(palindromeCheck(aStr))
            cout<<"You won't be eaten!"<<endl;
        else
            cout<<"Uh oh.."<<endl;
        getline(cin, aStr);
    }
}

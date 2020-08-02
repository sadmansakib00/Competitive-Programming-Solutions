#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string aStr;
    int dif=INT_MAX, ans=-1;
    queue<int> openP;
    queue<int> closeP;
    vector<int> format;
    cin >> aStr;
    int oArr[aStr.length()+1];
    int cArr[aStr.length()+1];
    oArr[0]=0;
    cArr[0]=0;
    for(int i=0; i<aStr.length(); i++) {
        if(aStr[i]=='(') {
            openP.push(i+1);
            oArr[i+1]=oArr[i]+1;
        } else {
            oArr[i+1]=oArr[i];
        }
    }
    for(int i=aStr.length()-1; i>-1; i--) {
        if(i==aStr.length()-1) {
            if(aStr[i]==')') {
                cArr[i+1] = 1;
                closeP.push(i+1);
            } else {
                cArr[i+1] = 0;
            }
        } else {
            if(aStr[i]==')') {
                cArr[i+1] = cArr[i+2]+1;
                closeP.push(i+1);
            } else {
                cArr[i+1] = cArr[i+2];
            }
        }
    }
    for(int i=1; i<=aStr.length(); i++) {
        if(abs(oArr[i]-cArr[i])<dif && oArr[i]!=0 && cArr[i]!=0) {
            dif = abs(oArr[i]-cArr[i]);
            ans = max(oArr[i],cArr[i])-dif;
        }
    }
    if(ans == -1) {
        cout << "0\n";
    } else {
        cout << "1\n" << 2*ans << "\n";
        for(int i=0; i<ans; i++) {
            cout << openP.front() << " ";
            openP.pop();
        }
        for(int i=0; i<ans; i++) {
            format.push_back(closeP.front());
            closeP.pop();
        }
        sort(format.begin(),format.end());
        for(int i=0; i<format.size(); i++) {
            if(i==format.size()-1) {
                cout << format[i] << "\n";
            } else {
                cout << format[i] << " ";
            }
        }
    }
}

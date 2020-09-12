#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    string aStr;
    map<int,int> aMap;
    map<int,int>::iterator it;
    aMap[1]=1;
    aMap[2]=4;
    aMap[3]=7;
    aMap[4]=2;
    aMap[5]=5;
    aMap[6]=8;
    aMap[7]=3;
    aMap[8]=6;
    aMap[9]=9;
    int anArr[10][10];
    cin >> t;
    while(t-- > 0) {
        for(int i=1; i<10; i++) {
            cin >> aStr;
            for(int j=1; j<10; j++) {
                anArr[i][j] = aStr[j-1]-'0';
            }
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            anArr[it->first][it->second]=(anArr[it->first][it->second]%9)+1;
        }
        for(int i=1; i<10; i++) {
            for(int j=1; j<10; j++) {
                cout << anArr[i][j];
            }
            cout << "\n";
        }
    }
}

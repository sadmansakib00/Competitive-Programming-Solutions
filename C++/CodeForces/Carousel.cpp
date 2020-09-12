#include<bits/stdc++.h>
using namespace std;

pair<int,string> check(int types[], int n, int totalTypes,bool toggle) {
    int color=1,curColor=1;
    string ans="";
    bool flag=true,colorFlag=true;
    for(int i=1; i<=n; i++) {
        if(i==1) {
            ans += "1";
        } else if(i==n) {
            if(types[i]==types[i-1] && types[i]==types[1]) {
                ans += " " + to_string(curColor);
            } else if(types[i-1]==types[1] && types[i]!=types[1]) {
                if(curColor==1) {
                    ans += " 2";
                    if(color==1) color++;
                } else {
                    color++;
                    ans += " 3";
                }
            } else if(types[i-1]==types[i] && types[i]!=types[1]) {
                ans += " 2";
                if(color==1) color++;
            } else if(types[i-1]!=types[i] && types[i]==types[1]) {
                if(curColor==1) {
                    ans += " 2";
                    if(color==1) color++;
                } else {
                    ans += " 1";
                }
            } else {
                if(curColor==1) {
                    ans += " 2";
                    if(color==1) color++;
                } else {
                    ans += " 3";
                    color++;
                }
            }
        } else {
            //n%2!=0 && flag && types[i]==types[i-1] &&
            if(types[i]==types[i-1] && toggle) {
                ans += " " + to_string(curColor);
                toggle = false;
            } else {
                if(totalTypes==1) {
                    ans += " 1";
                } else {
                    curColor == 1 ? curColor=2 : curColor=1;
                    if(colorFlag) {
                        color++;
                        colorFlag = false;
                    }
                    ans += " " + to_string(curColor);
                }
            }
        }
    }
    return make_pair(color,ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int q,n;
    cin >> q;
    while(q-- > 0) {
        cin >> n;
        int types[n+1];
        map<int,int> aMap;
        for(int i=1; i<=n; i++) {
            cin >> types[i];
            aMap.insert(pair<int,int>(types[i],i));
        }
        pair<int,string> firstPair = check(types,n,aMap.size(),true);
        pair<int,string> secondPair = check(types,n,aMap.size(),false);

        if(firstPair.first<secondPair.first) {
            cout << firstPair.first << "\n";
            cout << firstPair.second << "\n";
        } else {
            cout << secondPair.first << "\n";
            cout << secondPair.second << "\n";
        }
    }
}

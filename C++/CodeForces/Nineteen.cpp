#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int ans=INT_MAX;
    string aStr;
    map<char,int> aMap;
    map<char,int>::iterator it;
    cin >> aStr;
    for(int i=0; i<aStr.length(); i++) {
        if(aStr[i]=='n' || aStr[i]=='i' || aStr[i]=='e' || aStr[i]=='t') {
            if(aMap.find(aStr[i]) != aMap.end()) {
                aMap[aStr[i]] = aMap[aStr[i]]+1;
            } else {
                aMap.insert(pair<char,int>(aStr[i],1));
            }
        }
    }
    if(aMap.size() == 4) {
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->first == 'e') {
                it->second = (it->second)/3;
            }
            if(it->first == 'n') {
                if(it->second > 3) {
                    it->second = 1 + (it->second - 3)/2;
                } else {
                    it->second = (it->second)/3;
                }
            }
            if(it->second<ans) {
                ans = it->second;
            }
        }
    }
    if(ans == INT_MAX) {
        ans = 0;
    }
    cout << ans << "\n";
}

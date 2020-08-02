#include<bits/stdc++.h>
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main() {
    horsePower;
    int t,n;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s;
        map<string,int> aMap;
        map<char,vector<int> > letters;
        for(int i=0; i<n; i++) {
            letters[s[i]].push_back(i);
        }
        vector<int> lowestCharPos = letters.begin()->second;
        if(lowestCharPos.size()==n) {
            cout << s << "\n" << "1\n";
            continue;
        }
        for(int i : lowestCharPos) {
            string temp = s.substr(i,n-i);
            if((n-i)%2==0) {
                temp += s.substr(0,i);
            } else {
                string tempTwo = s.substr(0,i);
                reverse(tempTwo.begin(),tempTwo.end());
                temp += tempTwo;
            }
            aMap.insert(pair<string,int>(temp,i+1));
        }
        cout << aMap.begin()->first << "\n" << aMap.begin()->second << "\n";
    }
}

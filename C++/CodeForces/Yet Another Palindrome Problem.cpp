#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,temp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        flag = true;
        map<int,vector<int> > aMap;
        map<int,vector<int> >::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap[temp].push_back(i);
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->second.size()>1) {
                if(it->second[it->second.size()-1]-it->second[0] >1) {
                    flag = false;
                    cout << "YES\n";
                }
            }
            if(!flag) {
                break;
            }
        }
        if(flag) {
            cout << "NO\n";
        }
    }
}

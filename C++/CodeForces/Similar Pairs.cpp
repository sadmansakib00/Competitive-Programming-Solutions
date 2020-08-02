#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t,n,eCount,oCount,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        eCount=0,oCount=0;
        unordered_map<int,int> even;
        unordered_map<int,int> odd;
        unordered_map<int,int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp&1) {
                oCount++;
                odd[temp]++;
            } else {
                eCount++;
                even[temp]++;
            }
        }
        if(eCount%2==0 && oCount%2==0) cout << "YES\n";
        else {
            temp = 0;
            for(it=even.begin(); it!=even.end(); ) {
                if(temp==2) break;
                if(odd[it->first-1]>0) {
                    temp++;
                    odd[it->first-1]--;
                    it->second--;
                    if(it->second==0) it++;
                } else if(odd[it->first+1]>0) {
                    temp++;
                    odd[it->first+1]--;
                    it->second--;
                    if(it->second==0) it++;
                } else {
                    it++;
                }
            }
            if(eCount&1 && oCount&1) {
                if(temp>=1) cout << "YES\n";
                else cout << "NO\n";
            } else {
                if(temp==2) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}

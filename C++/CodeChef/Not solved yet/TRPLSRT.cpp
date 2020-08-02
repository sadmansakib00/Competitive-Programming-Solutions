#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define makeStr(x,y,z) to_string(x)+" "+to_string(y)+" "+to_string(z)
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,k,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        unordered_map<int,int> valPos;
        unordered_map<int,int> posVal;
        unordered_map<int,int>::iterator it;
        vector<string> ans;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp!=i+1) {
                valPos.insert({temp,i+1});
                posVal.insert({i+1,temp});
            }
        }
        while(true) {
            it = valPos.begin();
            int sec = posVal[it->first];
            int third = posVal[sec];
            ans.push_back(makeStr(it->second,valPos[sec],valPos[third]));
            if(it->second==third) {
                posVal.erase(it->second);
                posVal.erase(valPos[sec]);
                posVal.erase(valPos[third]);
                valPos.erase(it->first);
                valPos.erase(sec);
                valPos.erase(third);
            } else {
                pair<int,int> tempPair(third,it->second);
                posVal.erase(it->second);
                posVal.erase(valPos[sec]);
                posVal.erase(valPos[third]);
                valPos.erase(it->first);
                valPos.erase(sec);
                valPos.erase(third);

                valPos.insert(tempPair);
                swap(tempPair.first,tempPair.second);
                posVal.insert(tempPair);
            }
            if(posVal.size()<3) break;
        }
        if(posVal.size()==0) {
            cout << ans.size() << "\n";
            for(int i=0; i<ans.size(); i++) {
                cout << ans[i] << "\n";
            }
        } else {
            cout << "-1\n";
        }
    }
}

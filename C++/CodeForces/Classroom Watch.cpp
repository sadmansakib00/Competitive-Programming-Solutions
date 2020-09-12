#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> ans;
    int len = to_string(n).length();
    len = len*9;
    for(int i=1; i<=len; i++) {
        if(n-i<0) break;
        else {
            string aStr = to_string(n-i);
            int sumDig = 0;
            for(int j=0; j<aStr.length(); j++) {
                sumDig += aStr[j]-'0';
            }
            if(n-i+sumDig==n) ans.push_back(n-i);
        }
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << "\n";
    }
}

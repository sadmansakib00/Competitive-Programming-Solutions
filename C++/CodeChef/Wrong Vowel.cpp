#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	cout.tie(0);
    int t,n,vCount;
    char temp;
    string aStr;
    vector<char> aV;
    cin >> t;
    while(t-- > 0) {
        vCount = 0;
        cin >> n;
        aV.clear();
        for(int m=0; m<n; m++) {
            cin >> temp;
            aV.push_back(temp);
        }
        getline(cin, aStr);
        getline(cin, aStr);
        for(int m=0; m<aStr.length(); m++) {
            for(int k=0; k<aV.size(); k++) {
                if(aStr[m]==aV[k]) {
                    ++vCount;
                    break;
                }
            }
        }
        cout << vCount << "\n";
    }
}

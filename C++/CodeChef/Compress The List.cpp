#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,n,temp,total;
    cin >> t;
    while(t-->0) {
        cin >> n;
        int anArr[n];
        vector<int> aV;
        cin >> anArr[0];
        aV.push_back(anArr[0]);
        for(int m=1; m<n; m++) {
            cin >> anArr[m];
            if(anArr[m] == anArr[m-1]+1) {
                aV.push_back(anArr[m]);
            } else {
                if(aV.size()>2) {
                    cout << aV[0] << "..." << aV[aV.size()-1] << ",";
                    aV.clear();
                    aV.push_back(anArr[m]);
                }
                else {
                    for(int p=0; p<aV.size(); p++) {
                        cout << aV[p] <<  ",";
                    }
                    aV.clear();
                    aV.push_back(anArr[m]);
                }
            }
        }
        if(aV.size()>2) {
            cout << aV[0] << "..." << aV[aV.size()-1] << "\n";
        }
        else {
            if(aV.size()==2) {
                cout << aV[0] << "," << aV[1] << "\n";
            } else {
                cout << aV[0] << "\n";
            }
        }
    }
}

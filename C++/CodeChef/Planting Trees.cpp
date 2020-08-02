#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned long long

vector<int> aV;

int main() {
    horsePower;
    ll t,n,total,temp;
    cin >> t;
    while(t-- > 0) {
        aV.clear();
        total = 0;
        cin >> n;
        for(int m=0; m<n; m++) {
            cin >> temp;
            aV.push_back(temp);
        }
        sort(aV.begin(),aV.end());
        temp = -2;
        for(int m=0; m<aV.size(); m++) {
            if(m==aV.size()-1) {
                if(temp != aV[m]-1) {
                    total++;
                }
            } else {
                if(aV[m+1] != aV[m]+1 && temp != aV[m]-1) {
                    total++;
                    temp = aV[m]+1;
                } else {
                    temp = aV[m];
                }
            }
        }
        cout << total << "\n";
    }
}

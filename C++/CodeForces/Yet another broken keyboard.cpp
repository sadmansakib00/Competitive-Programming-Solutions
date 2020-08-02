#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    ll n,k,sub=0,sum=0;
    bool flag = false;
    char temp;
    string aStr;
    cin >> n >> k;
    cin >> aStr;
    vector<char> aV;
    for(int i=0; i<k; i++) {
        cin >> temp;
        aV.push_back(temp);
    }
    for(int i=0; i<n; i++) {
        flag = false;
        for(int j=0; j<k; j++) {
            if(aV[j] == aStr[i]) {
                flag = true;
                sub++;
                break;
            }
        }
        if(!flag) {
            sum += (sub*(sub+1))/2;
            sub = 0;
        }
    }
    if(flag) {
        sum += (sub*(sub+1))/2;
    }
    cout << sum << "\n";
}

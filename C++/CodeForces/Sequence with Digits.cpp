#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define ll long long int
PII miNMax(string aStr) {
    PII aPair;
    aPair.first = INT_MAX;
    aPair.second = INT_MIN;
    for(int i=0; i<aStr.length(); i++) {
        if(aStr[i]-'0'<aPair.first) aPair.first = aStr[i]-'0';
        if(aStr[i]-'0'>aPair.second) aPair.second = aStr[i]-'0';
    }
    return aPair;
}
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,k,minn,maxx;
    string aStr;
    pair<char,char> aPair;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        aStr = to_string(n);
        aPair = miNMax(aStr);
        while(k-- > 1 && aPair.first != 0) {
            n += aPair.first*aPair.second;
            aStr = to_string(n);
            aPair = miNMax(aStr);
        }
        cout << n << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll n,temp,ans=0;
    cin >> n;
    ll anArr[100001] = {0};
    for(ll i=0; i<n; i++) {
        cin >> temp;
        anArr[temp]++;
    }
    for(ll i=2; i<=100001; i++) {
        anArr[i]=max(anArr[i-2]+i*anArr[i],anArr[i-1]);
    }
    cout << anArr[100000] << "\n";
}

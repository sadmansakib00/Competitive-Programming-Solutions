#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,k,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        vector<ll> a;
        vector<ll> b;
        for(int i=0; i<n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        for(int i=0; i<n; i++) {
            cin >> temp;
            b.push_back(temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<ll>());
        temp = 0;
        for(int i=0; i<k; i++) {
            if(b[i]>a[i])
                temp += b[i];
            else
                temp += a[i];
        }
        for(int i=k; i<n; i++) {
            temp += a[i];
        }
        cout << temp << "\n";
    }
}

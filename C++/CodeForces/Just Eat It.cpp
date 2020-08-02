#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int


int main() {
    horsePower;
    ll t,n,temp,sum=0,total=0,posCount;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<ll> posSum;
        sum = 0;
        total = 0;
        posCount = 0;
        for(int i=1; i<=n; i++) {
            cin >> temp;
            if(temp<0) {
                posSum.push_back(sum);
                sum = 0;
            } else {
                sum += temp;
                posCount++;
            }
           total += temp;
        }
        posSum.push_back(sum);
        temp = *max_element(posSum.begin(),posSum.end());
        //cout << "total = " << total << " max = " << temp << "\n";
        if(total > temp || posCount == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

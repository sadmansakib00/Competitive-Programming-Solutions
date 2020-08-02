#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,temp,maxDif=INT_MIN,lastPos;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        maxDif=INT_MIN;
        vector<ll> v;
        for(ll i=0; i<n; i++) {
            cin >> temp;
            v.push_back(temp);
            if(i>0) {
                int dif = v[i]-v[lastPos];
                if(dif<0) {
                    if(abs(dif)>maxDif) {
                        maxDif = abs(dif);
                    }
                } else {
                    lastPos = i;
                }
            } else {
                lastPos = 0;
            }
        }
        //cout << "difCount = " << difCount << " maxDif = " << maxDif << "\n";
        if(maxDif==INT_MIN) {
            maxDif = 0;
        }
        ll i=0;
        ll sum=0;
        while(sum<maxDif) {
            i++;
            sum += pow(2,i-1);
        }
        cout << i << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,maxDamPos;
    ll ans,temp;
    double h,d,maxDamage;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = 0;
        vector<pair<double,double> > v;
        vector<double> damageRate;
        bool flag[n] = {0};
        for(int i=0; i<n; i++) {
            cin >> h >> d;
            v.push_back(pair<double,double>(h,d));
            damageRate.push_back(d/h);
        }
        while(true) {
            maxDamage = -1;
            for(int i=0; i<n; i++) {
                if(!flag[i] && damageRate[i]>maxDamage) {
                    maxDamPos = 0;
                    maxDamage = damageRate[i];
                }
            }
            for(int i=maxDamPos; ;) {
                ans += (ll)v[i].first;
                flag[i]=true;
                i++;
                if(i==n) {
                    i=0;
                }
                v[i].first>
            }
        }
    }
}

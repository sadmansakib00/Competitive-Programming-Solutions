#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PII pair<ll,ll>
struct cusComp {
    bool operator()(const pair<int,PII> &pOne, const pair<int,PII> &pTwo) {
        if(pOne.first!=pTwo.first) {
            return pOne.first<=pTwo.first;
        } else {
            return pOne.second.first>=pTwo.second.first;
        }
    }
};
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,i,temp;
    PII pOne,pTwo;
    bool fOne,fTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ll anArr[n+1];
        priority_queue<pair<int,PII>, vector<pair<int,PII>>, cusComp> q;
        q.push({0,{1,n}});
        i=1;
        while(!q.empty()) {
            PII aPair = q.top().second;
            fOne = false, fTwo = false;
            q.pop();
            if((aPair.second-aPair.first+1)%2==0) {
                temp = (aPair.second+aPair.first-1)/2;
            } else {
                temp = (aPair.second+aPair.first)/2;
            }
            anArr[temp] = i;
            if(temp != aPair.first) {
                pOne = {aPair.first,temp-1};
                fOne = true;
            }
            if(temp != aPair.second) {
                pTwo = {temp+1,aPair.second};
                fTwo = true;
            }
            if(fOne && fTwo) {
                q.push({pOne.second-pOne.first+1,pOne});
                q.push({pTwo.second-pTwo.first+1,pTwo});
            } else if(fOne) {
                q.push({pOne.second-pOne.first+1,pOne});
            } else if(fTwo) {
                q.push({pTwo.second-pTwo.first+1,pTwo});
            }
            i++;
        }
        for(int j=1; j<=n; j++) {
            if(j!=1) cout << " ";
            cout << anArr[j];
        }
        cout << "\n";
    }
}

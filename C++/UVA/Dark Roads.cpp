#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PLL pair<ll,ll>
#define VPLL vector<PLL>
bool visited[200000];
ll prim(vector<VPLL> &v, ll x) {
    memset(visited,0,sizeof(visited));
    PLL tempPair;
    priority_queue<PLL,vector<PLL>,greater<PLL>> q;
    q.push({0,x});
    ll minCost = 0;
    while(!q.empty()) {
        tempPair = q.top();
        q.pop();
        x = tempPair.second;
        if(!visited[x]) {
            //cout << "x = " << x << "\n";
            minCost += tempPair.first;
            visited[x]=1;
            for(int i=0; i<v[x].size(); i++) {
                ll y = v[x][i].second;
                if(!visited[y]) {
                    q.push({v[x][i].first,y});
                }
            }
        }
    }
    return minCost;
}
int main() {
    ios_base::sync_with_stdio(false);
    ll m,n,x,y,w,totalCost;
    while(true) {
        cin >> m >> n;
        totalCost = 0;
        if(m==0 && n==0) break;
        vector<VPLL> v(m);
        for(int i=0; i<n; i++) {
            cin >> x >> y >> w;
            totalCost += w;
            v[x].push_back({w,y});
            v[y].push_back({w,x});
        }
        cout << totalCost-prim(v,0) << "\n";
    }
}

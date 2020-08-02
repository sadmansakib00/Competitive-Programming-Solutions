#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define PLL pair<ll,ll>
#define PDL pair<double,ll>
#define VPDL vector<PDL>
#define ans(t) cout<<"Case #"<<t<<": "<<states<<" "<<round(roadCost)<<" "<<round(railCost)<<"\n";
bool visited[1000];
ll states;
double roadCost,railCost;
void prim(vector<VPDL> &adj, int r) {
    memset(visited,0,sizeof(visited));
    priority_queue<PDL,VPDL,greater<PDL>> q;
    PDL tPair;
    int x,y;
    double minCost = 0;
    states=1;
    roadCost=0,railCost=0;
    q.push({0,0});
    while(!q.empty()) {
        tPair = q.top();
        q.pop();
        x = tPair.second;
        if(!visited[x]) {
            minCost+=tPair.first;
            if(minCost-(roadCost+railCost)>r) {
                states++;
                railCost+=tPair.first;
            } else {
                roadCost+=tPair.first;
            }
            visited[x] = 1;
            for(int i=0; i<adj[x].size(); i++) {
                y = adj[x][i].second;
                if(!visited[y]) {
                    q.push({adj[x][i].first,y});
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,r,x,y;
    double dis;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n >> r;
        vector<PLL> v;
        vector<VPDL> adj(n);
        for(int j=0; j<n; j++) {
            cin >> x >> y;
            v.push_back({x,y});
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                dis = sqrt((double)pow(abs(v[i].first-v[j].first),2)+(double)pow(abs(v[i].second-v[j].second),2));
                adj[i].push_back({dis,j});
            }
        }
        prim(adj,r);
        ans(i);
    }
}

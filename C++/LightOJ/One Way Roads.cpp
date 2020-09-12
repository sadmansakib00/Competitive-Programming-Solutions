#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define VPII vector<PII>
bool *visited;
VPII *adj;
int total;
void dfs(int x) {
    visited[x] = true;
    for(PII aPair : adj[x]) {
        if(!visited[aPair.first]) {
            total += aPair.second;
            dfs(aPair.first);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n,u,v,w,ans,first,sec;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        first=0,sec=0;
        adj = new VPII[n];
        for(int j=0; j<n; j++) {
            cin >> u >> v >> w;
            if(u-1==0 || v-1==0) {
                if(first == 0) first=w;
                else sec=w;
            }
            adj[u-1].push_back({v-1,0});
            adj[v-1].push_back({u-1,w});
        }
        total = 0;
        ans = 0;
        if(adj[0][1].second==0) {
            ans = sec;
        }
        visited = new bool[n]{0};
        dfs(0);
        ans += total;
        delete[] visited;
        visited = new bool[n]{0};
        if(adj[0][0].second==0) {
            total = first;
        } else {
            total = 0;
        }
        adj[0].erase(adj[0].begin()+0);
        dfs(0);
        delete[] visited;
        ans = min(ans,total);
        cout << "Case " << i << ": " << ans << "\n";
        delete[] adj;
    }
}

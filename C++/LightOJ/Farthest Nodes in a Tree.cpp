#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define VPII vector<PII>
bool *visited;
int *level;
int maxN,maxW;
int dfs(vector<VPII> &adj, int x) {
    if(maxW < level[x]) {
        maxN = x;
        maxW = level[x];
    }
    visited[x] = true;
    for(PII p : adj[x]) {
        if(!visited[p.first]) {
            level[p.first] = p.second+level[x];
            dfs(adj,p.first);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,u,v,w;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        vector<VPII> adj(n);
        for(int j=1; j<n; j++) {
            cin >> u >> v >> w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }

        maxW = 0;
        /*
        int tempLevel[n] = {0};
        level = tempLevel;
        */
        level = new int[n]{0};
        /*
        bool flags[n] = {0};
        visited = flags;
        */
        visited = new bool[n]{0};
        dfs(adj,0);
        delete[] level;
        delete[] visited;
        /*
        bool tempFlags[n] = {0};
        visited = tempFlags;
        */
        visited = new bool[n]{0};
        /*
        int tempTempLevel[n] = {0};
        level = tempTempLevel;
        */
        level = new int[n]{0};
        dfs(adj,maxN);
        cout << "Case " << i << ": " << maxW << "\n";
        delete[] level;
        delete[] visited;
    }
}

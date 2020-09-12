#include<bits/stdc++.h>
using namespace std;
#define casePrint(i,x) cout << "Case " << i << ": " << x << "\n";
#define pb push_back
#define VI vector<int>
#define VVI vector<VI>
#define PII pair<int,int>
int v;
bool *visited;
int *lvlOne, *lvlTwo;
void bfs(VVI &adj, int u,bool toggle) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    if(toggle) lvlOne[u]=0;
    else lvlTwo[u]=0;
    while(!q.empty()) {
        u = q.front();
        q.pop();
        for(int i : adj[u]) {
            if(!visited[i]) {
                if(toggle) lvlOne[i]=lvlOne[u]+1;
                else lvlTwo[i]=lvlTwo[u]+1;
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,r,u,ans;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n >> r;
        VVI adj(n);
        ans = 0;
        for(int j=0; j<r; j++) {
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        cin >> u >> v;
        lvlOne = new int[n]{0};
        lvlTwo = new int[n]{0};
        visited = new bool[n]{0};
        bfs(adj,u,true);
        visited = new bool[n]{0};
        bfs(adj,v,false);
        for(int j=0; j<n; j++) {
            ans = max(lvlOne[j]+lvlTwo[j],ans);
        }
        casePrint(i,ans);
        delete[] lvlOne,lvlTwo,visited;
    }
}

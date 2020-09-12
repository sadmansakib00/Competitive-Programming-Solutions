#include<bits/stdc++.h>
using namespace std;
#define VVI vector<vector<int> >
bool *visited;
int bfs(VVI &adj,int x) {
    queue<int> q;
    q.push(x);
    int level[adj.size()];
    visited[x]=true;
    level[x]=0;
    int vamp=0,lykan=0;
    while(!q.empty()) {
        x = q.front();
        if(level[x]%2==0) vamp++;
        else lykan++;
        q.pop();
        for(int y : adj[x]) {
            if(!visited[y]) {
                q.push(y);
                level[y] = level[x]+1;
                visited[y] = true;
            }
        }
    }
    return max(vamp,lykan);
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,u,v,ans;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        ans = 0;
        visited = new bool[20000]{0};
        VVI adj(20000);
        set<int> aSet;
        set<int>::iterator it;
        for(int j=0; j<n; j++) {
            cin >> u >> v;
            aSet.insert(u-1);
            aSet.insert(v-1);
            adj[u-1].push_back(v-1);
            adj[v-1].push_back(u-1);
        }
        for(it=aSet.begin(); it!=aSet.end(); it++) {
            if(!visited[*it])
                ans = ans+bfs(adj,*it);
        }
        cout << "Case " << i << ": " << ans << "\n";
        delete[] visited;
    }
}

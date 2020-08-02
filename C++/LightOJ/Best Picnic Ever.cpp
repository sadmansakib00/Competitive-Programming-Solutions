#include<bits/stdc++.h>
using namespace std;
#define VI vector<int>
#define VVI vector<VI>
#define SI set<int>
#define casePrint(i,x) cout << "Case " << i << ": " << x << "\n";
bool *visited;
SI cur;
void dfs(VVI &adj, int x) {
    cur.insert(x);
    for(int i : adj[x]) {
        if(!visited[i]) {
            visited[i] = 1;
            dfs(adj,i);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int t,k,n,m,u,v,temp;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> k >> n >> m;
        SI tempSet;
        VI peeps,ans(n);
        VI::iterator it = ans.begin();
        VVI adj(n);
        for(int j=0; j<k; j++) {
            cin >> temp;
            peeps.push_back(temp-1);
        }
        for(int j=0; j<m; j++) {
            cin >> u >> v;
            tempSet.insert(u-1);
            tempSet.insert(v-1);
            adj[u-1].push_back(v-1);
        }
        VI pri(tempSet.begin(),tempSet.end());
        for(int j=0; j<peeps.size(); j++) {
            visited = new bool[n]{0};
            cur.clear();
            visited[peeps[j]]=1;
            dfs(adj,peeps[j]);
            it = set_intersection(pri.begin(),pri.end(),cur.begin(),cur.end(),ans.begin());
            ans.resize(it-ans.begin());
            pri = ans;
            delete[] visited;
        }
        casePrint(i,ans.size());
    }
}

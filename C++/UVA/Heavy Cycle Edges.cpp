#include<bits/stdc++.h>
using namespace std;
#define PB push_back
#define PII pair<int,int>
#define VPII vector<PII>
#define VVPII vector<VPII>
bool *visited;
multiset<int> ans;
multiset<int>::iterator it;
void prim(VVPII &adj, int x) {
    priority_queue<PII, vector<PII>, greater<PII>> q;
    q.push({0,x});
    PII tempP;
    while(!q.empty()) {
        tempP = q.top();
        x = tempP.second;
        q.pop();
        if(!visited[x]) {
            visited[x] = 1;
            if(x!=0) {
                it = ans.find(tempP.first);
                if(it!=ans.end())
                    ans.erase(it);
            }
            for(PII tempP : adj[x]) {
                if(!visited[tempP.second]) {
                   q.push(tempP);
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //freopen("OUTPUT_HeavyCycleEdges.txt","w",stdout);
    int n,m,u,v,w;
    while(true) {
        cin >> n >> m;
        if(n==0 && m==0) break;
        visited = new bool[n]{0};
        VVPII adj(n);
        for(int i=0; i<m; i++) {
            cin >> u >> v >> w;
            adj[u].PB({w,v});
            adj[v].PB({w,u});
            ans.insert(w);
        }
        for(int i=0; i<n; i++) {
            prim(adj,i);
        }
        if(ans.size()>0) {
            for(it=ans.begin(); it!=ans.end(); it++) {
                if(it!=ans.begin()) cout << " ";
                cout << *it;
            }
            cout << "\n";
        } else {
            cout << "forest\n";
        }
        delete[] visited;
        ans.clear();
        adj.clear();
    }
}

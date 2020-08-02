#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define VPII vector<PII>
#define VVPII vector<VPII>
bool *visited;
int prims(VVPII &adj, int start, int dest) {
    priority_queue<PII> q;
    q.push({0,start});
    PII tPair;
    int x,minCost = INT_MAX;
    while(!q.empty()) {
        tPair = q.top();
        q.pop();
        x = tPair.second;
        if(!visited[x]) {
            visited[x]=1;
            if(x!=start) {
                minCost = min(minCost,tPair.first);
            }
            if(x==dest) return minCost;
            for(PII tPair : adj[x]) {
                if(!visited[tPair.second]) {
                    q.push(tPair);
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t=1,n,r,cost,w=0;
    string start,dest;
    while(true) {
        cin >> n >> r;
        w = 0;
        if(n==0 && r==0) break;
        visited = new bool[n]{0};
        map<string,int> names;
        VVPII adj(n);
        for(int i=0; i<r; i++) {
            cin >> start >> dest >> cost;
            if(names.find(start)==names.end()) names[start]=w++;
            if(names.find(dest)==names.end()) names[dest]=w++;
            adj[names[start]].push_back({cost,names[dest]});
            adj[names[dest]].push_back({cost,names[start]});
        }
        cin >> start >> dest;
        cout << "Scenario #" << t << "\n";
        cout << prims(adj,names[start],names[dest]) << " tons\n\n";
        delete[] visited;
        t++;
    }
}

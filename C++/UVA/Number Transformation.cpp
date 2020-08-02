#include<bits/stdc++.h>
using namespace std;
#define VVI vector<vector<int> >
#define ans(i,x) cout << "Case " << i << ": " << x << "\n";
#define pRange 501
int *level;
int s,r;
bool *visited;
bool sieveFlag[pRange];
vector<int> primes;
void sieve() {
    int root = sqrt(pRange);
    primes.push_back(2);
    for(int i=2; i<pRange; i+=2) sieveFlag[i]=true;
    for(int i=3; i<=root; i+=2) {
        if(!sieveFlag[i]) {
            for(int j=i*i; j<pRange; j+=2*i) sieveFlag[j]=true;
        }
    }
    for(int i=3; i<pRange; i+=2) {
        if(!sieveFlag[i]) primes.push_back(i);
    }
}

void weavingGraph(VVI &adj) {
    for(int i=1; i<1001; i++) {
        for(int j : primes) {
            if(j!=i && i%j==0) {
                adj[i].push_back(j);
            }
        }
    }
}
void bfs(VVI &adj, int total) {
    queue<int> q;
    q.push(total);
    visited[total] = true;
    while(!q.empty()) {
        if(level[r] != 0) break;
        total = q.front();
        q.pop();
        if(total>r) continue;
        for(int i : adj[total]) {
            if(!visited[total+i]) {
                visited[total+i] = true;
                level[total+i]=level[total]+1;
                q.push(total+i);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    VVI adj(1001);
    weavingGraph(adj);
    for(int i=1; true; i++) {
        cin >> s >> r;
        if(s==0 && r==0) break;
        if(s==r) {
            ans(i,0);
            continue;
        }
        level = new int[1500]{0};
        visited = new bool[1500]{0};
        bfs(adj,s);
        if(level[r]==0) {
            ans(i,-1);
        } else {
            ans(i,level[r]);
        }
        delete[] level;
        delete[] visited;
    }
}

#include<bits/stdc++.h>
using namespace std;
bool visited[200002];
multimap<int,int> counted;
multimap<int,int>::iterator it;
int dfs(int s, vector<vector<int> > &v, int tillNow) {
    for(auto d : v[s]) {
        if(!visited[d]) {
            visited[d] = true;
            tillNow += dfs(d,v,1);
        }
    }
    if(s!=1) counted.insert(pair<int,int>(tillNow-1,s));
    else counted.insert(pair<int,int>(tillNow,s));
    return tillNow;
}
int main() {
    ios_base::sync_with_stdio(false);
    int n,k,u,v;
    cin >> n >> k;
    vector<vector<int> > aVec(n+1);
    for(int i=1; i<n; i++) {
        cin >> u >> v;
        aVec[u].push_back(v);
        aVec[v].push_back(u);
    }
    visited[1]=true;
    dfs(1,aVec,0);
    for(int i=0; i<k; i++) {
        it = counted.begin();
        counted.erase(it);
    }
    for(it=counted.begin(); it!=counted.end(); it++) {
        cout << it->second << "  " << it->first << "\n";
    }
}

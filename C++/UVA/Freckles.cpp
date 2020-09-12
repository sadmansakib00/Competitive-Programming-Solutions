#include<bits/stdc++.h>
using namespace std;
#define setPre(x) cout<<fixed<<setprecision(x);
bool visited[101];

double prim(vector<vector<pair<int,double>>> &adj,int x) {
    memset(visited,0,sizeof(visited));
    priority_queue<pair<double,int>, vector<pair<double,int>>, greater<pair<double,int>>> q;
    double minCost = 0;
    pair<double,int> tempPair;
    q.push(make_pair(0,x));
    while(!q.empty()) {
        tempPair = q.top();
        q.pop();
        x = tempPair.second;
        if(!visited[x]) {
            minCost += tempPair.first;
            visited[x] = 1;
            for(int i=0; i<adj[x].size(); i++) {
                int y = adj[x][i].first;
                if(!visited[y]) {
                    q.push({adj[x][i].second,y});
                }
            }
        }
    }
    return minCost;
}
int main() {
    ios_base::sync_with_stdio(false);
    setPre(2);
    int t,n;
    double x,y,dis;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        vector<pair<double,double> > v;
        vector<vector<pair<int,double>>> adj(n);
        for(int j=0; j<n; j++) {
            cin >> x >> y;
            v.push_back(pair<double,double>(x,y));
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                dis = sqrt(pow(abs(v[i].first-v[j].first),2)+pow(abs(v[i].second-v[j].second),2));
                adj[i].push_back(make_pair(j,dis));
            }
        }
        cout << prim(adj,0) << "\n";
        if(i!=t) cout << "\n";
    }
}

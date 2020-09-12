#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define VS vector<string>
#define output(i,s) cout << "Case " << i << ": " << s << "\n"
string dir[] = {"E","N","S","W"};
int row[] = {+0,-1,+1,+0};
int col[] = {+1,+0,+0,-1};
VS adj;
bool visited[12][12];
set<string> ans;
int r,c;
PII nextMove(PII curP, int i) {
    return {
        curP.first+row[i],
        curP.second+col[i]
    };
}
bool validity(PII curP) {
    if(curP.first<0 || curP.first==r) return false;
    else if(curP.second<0 || curP.second==c) return false;
    else if(adj[curP.first][curP.second]=='#') return false;
    else return true;
}
void bfs(PII curP) {
    queue<PII> q;
    q.push(curP);
    string level[12][12];
    memset(visited,0,sizeof(visited));
    visited[curP.first][curP.second]=true;
    PII tPair;
    while(!q.empty()) {
        curP = q.front();
        q.pop();
        for(int i=0; i<4; i++) {
            tPair = nextMove(curP,i);
            if(tPair.first<0 || tPair.first==r || tPair.second<0 || tPair.second==c) {
                ans.insert(level[curP.first][curP.second]+dir[i]);
            }
            if(validity(tPair) && !visited[tPair.first][tPair.second]) {
                level[tPair.first][tPair.second] = level[curP.first][curP.second]+dir[i];
                visited[tPair.first][tPair.second]=true;
                q.push(tPair);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    string aLine;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> r >> c;
        adj.clear();
        ans.clear();
        for(int j=0; j<r; j++) {
            cin >> aLine;
            adj.push_back(aLine);
        }
        for(int j=0; j<r; j++) {
            for(int k=0; k<c; k++) {
                if(adj[j][k]!='#') {
                    bfs({j,k});
                }
            }
        }
        if(ans.size()>0)
            output(i,*ans.begin());
        else
            output(i,"Impossible");
    }
}

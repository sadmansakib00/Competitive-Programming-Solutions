#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define MCPII map<char,PII>
#define VS vector<string>
#define casePrint(i,v) cout << "Case " << i << ": " << v << "\n";
int r,ans;
VS adj;
bool visited[11][11];
int level[11][11];
set<PII> charFlags;
int row[] = {+0,+1,+0,-1};
int col[] = {+1,+0,-1,+0};
PII nextMove(PII curP, int i) {
    return {
        curP.first+row[i],
        curP.second+col[i]
    };
}
bool validity(PII curP, PII desP) {
    if(curP.first<0 || curP.first>=r) return false;
    if(curP.second<0 || curP.second>=r) return false;
    if((curP.first!=desP.first || curP.second!=desP.second)
        && adj[curP.first][curP.second]!='.') return false;
    return true;
}
void bfs(PII curP, PII desP) {
    queue<PII> q;
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    q.push(curP);
    charFlags.insert(curP);
    visited[curP.first][curP.second]=true;
    while(!q.empty()) {
        curP = q.front();
        q.pop();
        if(desP.first==curP.first && desP.second==curP.second) {
            break;
        }
        for(int i=0; i<4; i++) {
            PII tempP = nextMove(curP,i);
            if(validity(tempP,desP) && !visited[tempP.first][tempP.second]) {
                visited[tempP.first][tempP.second]=true;
                level[tempP.first][tempP.second]=level[curP.first][curP.second]+1;
                q.push(tempP);
            }
        }
    }
    if(ans!=-1) {
        if(level[desP.first][desP.second]==0) {
            ans = -1;
        } else {
            ans += level[desP.first][desP.second];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    string aStr;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> r;
        ans = 0;
        adj.clear();
        charFlags.clear();
        MCPII mark;
        MCPII::iterator it;
        for(int j=0; j<r; j++) {
            cin >> aStr;
            adj.push_back(aStr);
            for(int k=0; k<r; k++) {
                if(aStr[k]!='.' && aStr[k]!='#') {
                    mark[aStr[k]]={j,k};
                }
            }
        };
        for(it=mark.begin(); it != --mark.end(); it++) {
            if(ans == -1) break;
            if(charFlags.count(it->second)==0 && charFlags.count(next(it)->second)==0) {
                bfs({it->second.first,it->second.second},{next(it)->second.first,next(it)->second.second});
            }
            adj[it->second.first][it->second.second]='.';
        }
        if(ans != -1) {
            casePrint(i,ans);
        }
        else {
            casePrint(i,"Impossible");
        }
    }
}

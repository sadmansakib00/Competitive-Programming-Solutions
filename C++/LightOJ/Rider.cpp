#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
int r,c;
bool visited[10][10];
int level[10][10];
int ans[10][10];
int row[] = {-2,-1,+1,+2,+2,+1,-1,-2};
int col[] = {+1,+2,+2,+1,-1,-2,-2,-1};
PII nextMove(PII curP, int i) {
    return {
        curP.first+row[i],
        curP.second+col[i]
    };
}
bool validity(PII curP) {
    if(curP.first<0 || curP.first>=r) return false;
    if(curP.second<0 || curP.second>=c) return false;
    return true;
}
int bfs(PII curP,int k) {
    memset(visited,0,sizeof(visited));
    memset(level,-1,sizeof(level));
    queue<PII> q;
    q.push(curP);
    visited[curP.first][curP.second]=true;
    level[curP.first][curP.second]=0;
    while(!q.empty()) {
        curP = q.front();
        q.pop();
        for(int i=0; i<8; i++) {
            PII tempP = nextMove(curP,i);
            if(validity(tempP) && !visited[tempP.first][tempP.second]) {
                q.push(tempP);
                visited[tempP.first][tempP.second]=true;
                level[tempP.first][tempP.second]=level[curP.first][curP.second]+1;
            }
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(level[i][j]==-1) {
                ans[i][j]=-1;
            } else {
                if(level[i][j]%k==0)
                    level[i][j] /= k;
                else
                    level[i][j] = level[i][j]/k + 1;
                if(ans[i][j] != -1) {
                    ans[i][j] += level[i][j];
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,total;
    string aLine;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> r >> c;
        memset(ans,0,sizeof(ans));
        total = INT_MAX;
        for(int j=0; j<r; j++) {
            cin >> aLine;
            for(int k=0; k<aLine.length(); k++) {
                if(aLine[k]!='.') {
                    bfs({j,k},aLine[k]-'0');
                }
            }
        }
        for(int j=0; j<r; j++) {
            for(int k=0; k<c; k++) {
                if(ans[j][k]!=-1) {
                    total = min(total,ans[j][k]);
                }
            }
        }
        if(total==INT_MAX) cout << "Case " << i << ": -1\n";
        else cout << "Case " << i << ": " << total << "\n";
    }

}

#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define VS vector<string>
#define VPII vector<PII>
VS adj;
VPII tempCry;
int m,n,total;
int crystals[500][500];
bool visited[500][500];
int row[] = {+1,+0,-1,+0};
int col[] = {+0,-1,+0,+1};
PII nextMove(PII curP, int x) {
    return {
        curP.first+row[x],
        curP.second+col[x]
    };
}
bool validity(PII curP) {
    if(curP.first<0 || curP.first>m-1) return false;
    if(curP.second<0 || curP.second>n-1) return false;
    if(adj[curP.first][curP.second]=='#') return false;
    return true;
}
void dfs(PII curP) {
    tempCry.push_back(curP);
    visited[curP.first][curP.second]=true;
    if(validity(curP) && adj[curP.first][curP.second]=='C') total++;
    for(int i=0; i<4; i++) {
        PII tempP = nextMove(curP,i);
        if(validity(tempP) && !visited[tempP.first][tempP.second]) {
            dfs(tempP);
        }
    }
}
void addCry() {
    for(int i=0; i<tempCry.size(); i++) {
        crystals[tempCry[i].first][tempCry[i].second] = total;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,q,x,y;
    string aStr;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> m >> n >> q;
        adj.clear();
        memset(crystals,0,sizeof(crystals));
        memset(visited,0,sizeof(visited));
        for(int j=0; j<m; j++) {
            cin >> aStr;
            adj.push_back(aStr);
        }
        for(int j=0; j<m; j++) {
            for(int k=0; k<n; k++) {
                if(!visited[j][k] && adj[j][k]!='#') {
                    total = 0;
                    tempCry.clear();
                    dfs({j,k});
                    addCry();
                }
            }
        }
        cout << "Case " << i << ":\n";
        while(q-- > 0) {
            cin >> x >> y;
            cout << crystals[x-1][y-1] << "\n";
        }
    }
}

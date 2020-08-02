#include<bits/stdc++.h>
//#include<windows.h>
using namespace std;
#define PII pair<int,int>
#define ff first
#define ss second
int n;
map<PII,bool> home;
bool vis[10][10][10][10][10][10];
short int lvl[10][10][10][10][10][10];
vector<string> adj;
int row[] = {-1,+0,+1,+0};
int col[] = {+0,+1,+0,-1};
struct robots {
    PII a,b,c;
};
PII nextMove(PII curPos, int i) {
    return {
        curPos.first+row[i],
        curPos.second+col[i]
    };
}
bool validity(PII curPos) {
    if(curPos.first<0 || curPos.first>=n) return false;
    else if(curPos.second<0 || curPos.second>=n) return false;
    else if(adj[curPos.first][curPos.second]=='#') return false;
    else return true;
}
int bfs(robots r) {
    memset(vis,0,sizeof(vis));
    memset(lvl,0,sizeof(lvl));
    vis[r.a.ff][r.a.ss][r.b.ff][r.b.ss][r.c.ff][r.c.ss]=1;
    queue<robots> q;
    q.push(r);
    PII pOne,pTwo,pThree;
    while(!q.empty()) {
        r = q.front();
        q.pop();
        if(home[r.a] && home[r.b] && home[r.c]) {
            return lvl[r.a.ff][r.a.ss][r.b.ff][r.b.ss][r.c.ff][r.c.ss];
        }
        for(int i=0; i<4; i++) {
            pOne = nextMove(r.a,i);
            if(!validity(pOne))   pOne = r.a;
            pTwo = nextMove(r.b,i);
            if(!validity(pTwo))    pTwo = r.b;
            pThree = nextMove(r.c,i);
            if(!validity(pThree))   pThree = r.c;
            if(pOne == pTwo) {
                if(pTwo == pThree) pThree = r.c;
                pOne = r.a;
                pTwo = r.b;
            } else {
                if(pOne == pThree) {
                    pOne = r.a;
                    pThree = r.c;
                }
                if(pTwo == pThree) {
                    pTwo = r.b;
                    pThree = r.c;
                }
            }
            robots x;
            x.a = pOne; x.b = pTwo; x.c = pThree;
            if(x.a != x.b && x.b != x.c && x.a != x.c) {
                if(!vis[x.a.ff][x.a.ss][x.b.ff][x.b.ss][x.c.ff][x.c.ss]) {
                    vis[x.a.ff][x.a.ss][x.b.ff][x.b.ss][x.c.ff][x.c.ss] = 1;
                    lvl[x.a.ff][x.a.ss][x.b.ff][x.b.ss][x.c.ff][x.c.ss] = lvl[r.a.ff][r.a.ss][r.b.ff][r.b.ss][r.c.ff][r.c.ss] + 1;
                    q.push(x);
                }
            }
        }
    }
    return -1;
}
void solve() {
    cin >> n;
    adj.clear();
    home.clear();
    robots r;
    string aStr;
    for(int i=0; i<n; i++) {
        cin >> aStr;
        adj.push_back(aStr);
        for(int j=0; j<n; j++) {
            if(aStr[j]=='A') {
                r.a = {i,j};
            } else if(aStr[j]=='B') {
                r.b = {i,j};
            } else if(aStr[j]=='C') {
                r.c = {i,j};
            } if(aStr[j]=='X') {
                home[{i,j}]=1;
            }
        }
    }
    int ans = bfs(r);
    if(ans==-1) cout << "trapped\n";
    else cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    //freopen("output.txt","w",stdout);
    int t; cin >> t;
    for(int i=1; i<=t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    //ShellExecute(NULL, "open", "output.txt", NULL, NULL, SW_SHOWNORMAL);
}

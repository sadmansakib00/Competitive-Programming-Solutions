#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
    #define _WIN32_WINNT 0x0500
    #include<windows.h>
#endif
#define openFile(n) ShellExecute(nullptr,"open",n,nullptr,nullptr,SW_SHOWNORMAL);
#define closeP(n) system((string("taskkill /im ")+n+" /f").c_str());
#define closeConsole PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
#define opf "output.txt"
#define ipf "input.txt"
#define mem(n,x) memset(n,x,sizeof(n));
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pb push_back
#define PII pair<int,int>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define PI acos(-1.0)
#define N 100000000

int n,m;
int dx[] = {-1,0,+1,0};
int dy[] = {0,+1,0,-1};

PII nextMove(PII aPair, int i) {
    return {
        aPair.ff+dx[i],
        aPair.ss+dy[i]
    };
}

bool validity(PII aPair) {
    if(aPair.ff<0 || aPair.ff>=n) return false;
    if(aPair.ss<0 || aPair.ss>=m) return false;
    return true;
}

bool checkEdge(PII aPair) {
    if(aPair.ss==0 || aPair.ss==m-1 || aPair.ff==0 || aPair.ff==n-1) return 1;
    else return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        ans = 0;
        int mat[n][m],ansMat[n][m];
        mem(ansMat,0);
        bool vis[n][m];
        set<int> aSet;
        set<int>::iterator it;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> mat[i][j];
                aSet.insert(mat[i][j]);
            }
        }
        for(it=aSet.begin(); it!=aSet.end(); it++) {
            mem(vis,0);
            vector<PII> tempPos;
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(mat[i][j]>=*it) {
                        vis[i][j]=1;
                    } else {
                        tempPos.pb({i,j});
                    }
                }
            }
            while(tempPos.size() > 0) {
                queue<PII> q;
                int x=tempPos[tempPos.size()-1].ff, y=tempPos[tempPos.size()-1].ss;
                q.push({x,y});
                tempPos.pop_back();
                vector<PII> candidatePos;
                bool flag = 1;
                if(!vis[x][y]) {
                    vis[x][y]=1;
                    while(!q.empty()) {
                        x = q.front().ff, y = q.front().ss;
                        candidatePos.pb({x,y});
                        q.pop();
                        if(checkEdge({x,y})) flag = 0;
                        for(int i=0; i<4; i++) {
                            PII tPair = nextMove({x,y},i);
                            if(validity(tPair) && !vis[tPair.ff][tPair.ss]) {
                                vis[tPair.ff][tPair.ss] = 1;
                                q.push(tPair);
                            }
                        }
                    }
                }
                if(flag) {
                    for(PII p : candidatePos) {
                        if(ansMat[p.ff][p.ss] < *it-mat[p.ff][p.ss]) {
                            ansMat[p.ff][p.ss] = *it-mat[p.ff][p.ss];
                        }
                    }
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                ans += ansMat[i][j];
            }
        }
        cout << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

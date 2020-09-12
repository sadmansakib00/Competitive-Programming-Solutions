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
int row[] = {-1,-1,-1,+0,+1,+1,+1,+0};
int col[] = {-1,+0,+1,+1,+1,+0,-1,-1};

PII nextMove(PII p, int i) {
    return {
        p.ff+row[i],
        p.ss+col[i]
    };
}

bool validity(PII p) {
    if(p.ff<0 || p.ff>=n || p.ss<0 || p.ss>=m) return 0;
    else return 1;
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
        int mat[n][m],level[n][m];
        map<int,vector<PII>,greater<int>> aMap;
        bool vis[n][m];
        ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> mat[i][j];
                aMap[mat[i][j]].pb({i,j});
            }
        }
        int val = aMap.begin()->ff;
        vector<PII> tVec = aMap.begin()->ss;
        queue<PII> q;
        mem(vis,0);
        mem(level,0);
        for(PII p : tVec) {
            q.push(p);
            vis[p.ff][p.ss]=1;
        }
        while(!q.empty()) {
            int x=q.front().ff, y=q.front().ss;
            q.pop();
            for(int i=0; i<8; i++) {
                PII tp = nextMove({x,y},i);
                if(validity(tp) && !vis[tp.ff][tp.ss] && mat[tp.ff][tp.ss]<val) {
                    vis[tp.ff][tp.ss] = 1;
                    level[tp.ff][tp.ss] = level[x][y]+1;
                    ans = max(ans,level[tp.ff][tp.ss]);
                    q.push(tp);
                }
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

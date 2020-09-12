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
#define N 101

int n,m,kOne,kTwo,mat[N][N],markOne[N][N],markTwo[N][N];
bool vis[N][N];

bool validity(PII p) {
    if(p.ff<0 || p.ff>=n || p.ss<0 || p.ss>=m) return 0;
    else if(mat[p.ff][p.ss]) return 0;
    return 1;
}

void bfs(bool toggle) {
    queue<PII> q;
    mem(vis,0);
    int range;
    if(toggle) {
        q.push({0,0});
        mem(markOne,0);
        vis[0][0] = 1;
        range = kOne;
    } else {
        mem(markTwo,0);
        q.push({0,m-1});
        vis[0][m-1] = 1;
        range = kTwo;
    }
    while(!q.empty()) {
        int x=q.front().ff, y=q.front().ss;
        q.pop();
        for(int i=x-range; i<=x+range; i++) {
            for(int j=y-range; j<=y+range; j++) {
                if(validity({i,j}) && !vis[i][j]) {
                    if(toggle) {
                        if(abs(i-x)+abs(j-y)<=kOne) {
                            vis[i][j] = 1;
                            markOne[i][j] = markOne[x][y]+1;
                            q.push({i,j});
                        }
                    } else {
                        if(abs(i-x)+abs(j-y)<=kTwo) {
                            vis[i][j] = 1;
                            markTwo[i][j] = markTwo[x][y]+1;
                            q.push({i,j});
                        }
                    }
                }
            }
        }
    }
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
        cin >> n >> m >> kOne >> kTwo;
        ans = INT_MAX;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> mat[i][j];
            }
        }
        bfs(0);
        bfs(1);
        if(m==1) {
            ans = 0;
        } else {
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(markOne[i][j]!=0 && markTwo[i][j]!=0) {
                        ans = min(ans,max(markOne[i][j],markTwo[i][j]));
                    } else if(i==0 && (j==0 || j==m-1)) {
                        if(markOne[i][j]!=0 || markTwo[i][j]!=0) {
                            ans = min(ans,max(markOne[i][j],markTwo[i][j]));
                        }
                    }
                }
            }
        }
        if(ans == INT_MAX) cout << "-1\n";
        else cout << ans << "\n";

    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

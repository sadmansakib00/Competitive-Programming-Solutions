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
#define N 1001

string mat[N];
int n,m;
int row[] = {+1,+0,+0,-1};
int col[] = {+0,-1,+1,+0};
string name[] = {"D","L","R","U"};
PII nextMove(PII p, int i) {
    return {
        p.ff+row[i],
        p.ss+col[i]
    };
}
bool validity(PII p) {
    if(p.ff<0 || p.ff>=n || p.ss<0 || p.ss>=m) return 0;
    else if(mat[p.ff][p.ss]=='*') return 0;
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

    int k,lastX=INT_MIN,lastY=0;
    cin >> n >> m >> k;
    string ans="",returnAns="",tempAns="";
    vector<PII> down;
    bool vis[n][m] = {0};
    queue<PII> q;
    For(0,n) {
        cin >> mat[i];
        for(int j=0; j<mat[i].length(); j++) {
            if(mat[i][j] == 'X') {
                q.push({i,j});
                vis[i][j] = 1;
            }
        }
    }
    if(k&1) cout << "IMPOSSIBLE";
    else {
        while(!q.empty()) {
            int x=q.front().ff, y=q.front().ss;
            q.pop();
            for(int i=0; i<4; i++) {
                PII p = nextMove({x,y},i);
                if(validity(p) && !vis[p.ff][p.ss]) {
                    ans += name[i];
                    vis[p.ff][p.ss] = 1;
                    q.push(p);
                    if(i==0) {
                        down.pb(p);
                    }
                    if(p.ff <= lastX) {
                        lastX = p.ff, lastY = p.ss;
                    }
                    break;
                }
            }
        }
        cout << "lastX = " << lastX << " and lastY = " << lastY << "\n";
        cout << ans << "\n";
        if(ans.length()==0) {
            cout << "IMPOSSIBLE\n";
        } else if(ans[0] == 'U') {
            for(int i=0; i<k; i++) {
                if(i&1) cout << "D";
                else cout << "U";
            }
        } else {
            ans = ans.substr(0,ans.find("U"));
            cout << ans << "\n";
            cout << "down.size() = " << down.size() << "\n";
            for(int i=down.size()-1; i>=0; i--) {
                cout << down[i].ff << " " << down[i].ss << "\n";
                bool tempFlag = false;
                int tempSize = 0;
                tempAns = "";
                for(int j=0; j<m; j++) {
                    if(j<m) {
                        tempSize++;
                        if(mat[down[i].ff][j] == '*') tempSize = 0;
                    } else if(j>m) {
                        if(!tempFlag) {
                            if(down[i].ff == lastX) {
                                tempAns = string(tempSize,'R');
                            } else {
                                tempAns = string(tempSize,'L');
                                tempAns += string(tempSize,'R')
                            }
                            tempSize = 0;
                        }
                        tempFlag = 1;
                        if(mat[down[i].ff][j] == '*') break;
                        tempSize++;
                    }
                }
            }
        }
        cout << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

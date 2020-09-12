#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
#pragma gcc optimize("unroll-loops")
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
#define N 100000000

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,m,curClr,cnt,ans;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n >> m;
        ans = 0;
        int clr[n][m],pre[n][m][4];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> clr[i][j];
            }
        }
        //Left, 0
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(j==0) {
                    curClr = clr[i][j];
                    cnt++;
                    pre[i][j][0] = 0;
                } else {
                    if(curClr == clr[i][j]) {
                        pre[i][j][0] = cnt;
                        cnt++;
                    } else {
                        pre[i][j][0] = 0;
                        curClr = clr[i][j];
                        cnt = 0;
                    }
                }
            }
        }
        //Right, 1
        for(int i=0; i<n; i++) {
            for(int j=m-1; j>=0; j--) {
                if(j==m-1) {
                    curClr = clr[i][j];
                    cnt++;
                    pre[i][j][1] = 0;
                } else {
                    if(curClr == clr[i][j]) {
                        pre[i][j][1] = cnt;
                        cnt++;
                    } else {
                        pre[i][j][1] = 0;
                        curClr = clr[i][j];
                        cnt = 0;
                    }
                }
            }
        }
        //Up, 2
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(j==0) {
                    curClr = clr[j][i];
                    cnt++;
                    pre[j][i][2] = 0;
                } else {
                    if(curClr == clr[j][i]) {
                        pre[j][i][2] = cnt;
                        cnt++;
                    } else {
                        pre[j][i][2] = 0;
                        curClr = clr[j][i];
                        cnt = 0;
                    }
                }
            }
        }
        //Down, 3
        for(int i=0; i<n; i++) {
            for(int j=m-1; j>=0; j--) {
                if(j==m-1) {
                    curClr = clr[j][i];
                    cnt++;
                    pre[j][i][3] = 0;
                } else {
                    if(curClr == clr[j][i]) {
                        pre[j][i][3] = cnt;
                        cnt++;
                    } else {
                        pre[j][i][3] = 0;
                        curClr = clr[j][i];
                        cnt = 0;
                    }
                }
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int temp = (pre[i][j][0]+pre[i][j][1]+pre[i][j][2]+pre[i][j][3]);
                if(temp > ans) ans = temp;
            }
        }
        cout << "Case " << i << ": " << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

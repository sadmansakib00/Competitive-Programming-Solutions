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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    int t,n;
    string sOne,sTwo;
    cin >> t;
    for(int tc=1; tc<=t; tc++) {
        cin >> n >> sOne >> sTwo;
        bool vis[n][n];
        mem(vis,0);
        for(int i=0; i<n; i++) {
            queue<int> q;
            if(i>0 && i<n-1) {
                if(sTwo[i]=='Y') {
                    if(sOne[i-1]=='Y') {
                        q.push(i-1);
                        vis[i][i-1] = 1;
                    }
                    if(sOne[i+1]=='Y') {
                        q.push(i+1);
                        vis[i][i+1] = 1;
                    }
                }
            } else if(i==0) {
                if(sTwo[i]=='Y' && sOne[i+1]=='Y') {
                    q.push(i+1);
                    vis[i][i+1] = 1;
                }
            } else {
                if(sTwo[i]=='Y' && sOne[i-1]=='Y') {
                    q.push(i-1);
                    vis[i][i-1] = 1;
                }
            }
            vis[i][i] = 1;
            while(!q.empty()) {
                int x = q.front();
                q.pop();
                if(x>0 && x<n-1) {
                    if(sTwo[x]=='Y') {
                        if(!vis[i][x-1] && sOne[x-1]=='Y') {
                            q.push(x-1);
                            vis[i][x-1] = 1;
                        }
                        if(!vis[i][x+1] && sOne[x+1]=='Y') {
                            q.push(x+1);
                            vis[i][x+1] = 1;
                        }
                    }
                } else if(i==0) {
                    if(!vis[i][x+1] && sTwo[x]=='Y' && sOne[x+1]=='Y') {
                        q.push(x+1);
                        vis[i][x+1] = 1;
                    }
                } else {
                    if(!vis[i][x-1] && sTwo[x]=='Y' && sOne[x-1]=='Y') {
                        q.push(x-1);
                        vis[i][x-1] = 1;
                    }
                }
            }
        }
        cout << "Case #" << tc << ":\n";
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(vis[i][j]) cout << "Y";
                else cout << "N";
            }
            cout << "\n";
        }
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

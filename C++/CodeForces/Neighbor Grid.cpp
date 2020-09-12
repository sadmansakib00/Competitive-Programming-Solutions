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

int n,m,mat[300][300];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        flag = true;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> mat[i][j];
                if(mat[i][j]>4) {
                    flag = false;
                }
            }
        }
        if(flag) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    if(i==0 && j==0) {
                        if(mat[i][j]>2) flag = false;
                        else mat[i][j] = 2;
                    } else if(i==n-1 && j==0) {
                        if(mat[i][j]>2) flag = false;
                        else mat[i][j] = 2;
                    } else if(i==0 && j==m-1) {
                        if(mat[i][j]>2) flag = false;
                        else mat[i][j] = 2;
                    } else if(i==n-1 && j==m-1) {
                        if(mat[i][j]>2) flag = false;
                        else mat[i][j] = 2;
                    } else if(i==0 || i==n-1 || j==0 || j==m-1) {
                        if(mat[i][j]>3) flag = false;
                        else mat[i][j] = 3;
                    } else {
                        mat[i][j] = 4;
                    }
                }
            }
            if(flag) {
                cout << "YES\n";
                for(int i=0; i<n; i++) {
                    for(int j=0; j<m; j++) {
                        if(j!=0) cout << " ";
                        cout << mat[i][j];
                    }
                    cout << "\n";
                }
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

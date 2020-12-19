#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
    #define _WIN32_WINNT 0x0500
    //#include<windows.h>
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
#define N 100001

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,k,x,y;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        int ax[n],ay[n];
        bool flag = 0;
        For(0,n) {
            cin >> x >> y;
            ax[i]=x,ay[i]=y;
        }
        for(int i=0; i<n; i++) {
            int marked = 0;
            for(int j=0; j<n; j++) {
                if(abs(ax[i]-ax[j])+abs(ay[i]-ay[j])<=k) {
                    marked++;
                }
            }
            if(marked==n) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            cout << "1\n";
        } else {
            cout << "-1\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

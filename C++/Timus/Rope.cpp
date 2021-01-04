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
#define N 100000000

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int n;
    double r;
    cin >> n >> r;
    double anArr[n][2], ans=2*3.141592653589793238*r;
    For(0,n) {
        cin >> anArr[i][0] >> anArr[i][1];
        if(i>0) {
            ans += sqrt((anArr[i-1][0]-anArr[i][0])*(anArr[i-1][0]-anArr[i][0]) +
                        (anArr[i-1][1]-anArr[i][1])*(anArr[i-1][1]-anArr[i][1]));
        }
        if(i==n-1) {
            ans += sqrt((anArr[0][0]-anArr[i][0])*(anArr[0][0]-anArr[i][0]) +
                        (anArr[0][1]-anArr[i][1])*(anArr[0][1]-anArr[i][1]));
        }
    }
    cout << fixed << setprecision(2) << ans << "\n";


    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

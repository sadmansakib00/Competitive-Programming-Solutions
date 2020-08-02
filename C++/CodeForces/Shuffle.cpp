#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
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
#define FOR(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define PLL pair<LL,LL>
#define N 100001
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL t, n, x, m, l, r;
    PLL ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x >> m;
        ans = {x,x};
        PLL edges;
        while(m-- > 0) {
            cin >> l >> r;
            edges = {l,r};
            if(edges.ff<ans.ff && edges.ss>ans.ss) {
                ans.ff = edges.ff;
                ans.ss = edges.ss;
            } else if(edges.ff<ans.ff && edges.ss>=ans.ff) {
                ans.ff = edges.ff;
            } else if(edges.ss>ans.ss && edges.ff<=ans.ss) {
                ans.ss = edges.ss;
            }
        }
        cout << ans.ss-ans.ff+1 << "\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

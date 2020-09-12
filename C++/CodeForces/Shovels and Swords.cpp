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
#define FOR(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
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

    int t, a, b, ans, dif;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        ans = 0;
        while(true) {
            if(a<b) swap(a,b);
            if(a-b<2 || a<2 || b<1) break;
            dif = (a-b)/2;
            a -= 2*dif;
            if(dif<=b) {
                ans += dif;
                b -= dif;
            } else {
                ans += b;
                b = 0;
            }
        }
        dif = min(a/3,b/3);
        ans += 2*dif;
        a -= dif*3;
        b -= dif*3;
        if(a<b) swap(a,b);
        if(a/2 >= b) ans += b;
        else ans += (a/2);
        cout << ans << "\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

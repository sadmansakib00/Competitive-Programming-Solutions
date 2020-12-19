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
#define PLL pair<LL,LL>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 100001

LL dp1[N],dp2[N],dp3[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL n;
    cin >> n;
    vector<LL> one(n),two(n),three(n);
    For(0,n) cin >> one[i] >> two[i] >> three[i];
    dp1[0]=one[0],dp2[0]=two[0],dp3[0]=three[0];
    For(1,n) {
        dp1[i] = one[i]+max(dp2[i-1],dp3[i-1]);
        dp2[i] = two[i]+max(dp1[i-1],dp3[i-1]);
        dp3[i] = three[i]+max(dp1[i-1],dp2[i-1]);
    }
    cout << max(dp1[n-1],max(dp2[n-1],dp3[n-1])) << "\n";

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

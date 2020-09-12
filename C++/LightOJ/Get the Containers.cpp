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
#define N 100000000

bool ok(int x,int m,int n,int anArr[]) {
    int curCap = x;
    for(int i=0; i<n; i++) {
        if(anArr[i]>curCap) {
            m--;
            curCap = x;
        }
        if(m==0) return 0;
        curCap -= anArr[i];
    }
    return 1;
}

void solve() {
    int n,m,lo=INT_MIN,hi=0,ans=-1;
    sf("%d%d",&n,&m);
    int anArr[n];
    For(0,n) {
        sf("%d",&anArr[i]);
        if(anArr[i]>lo) lo = anArr[i];
        hi += anArr[i];
    }
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(ok(mid,m,n,anArr)) {
            ans = mid;
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    pf("%d\n",ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d: ",i);
        solve();
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

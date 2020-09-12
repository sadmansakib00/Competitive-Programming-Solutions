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

int factorFiveCount(int n) {
    int fiveCount=0,x = log(n)/log(5);
    for(int i=1; i<=x; i++) {
        fiveCount += n/round(pow(5,i));
    }
    return fiveCount;
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

    int t,q;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        sf("%d",&q);
        int lo=5,hi = 1000000000,ans=-1;
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;
            int factFives = factorFiveCount(mid);
            if(factFives>=q) {
                hi = mid-1;
                if(factFives == q)  ans = mid;
            } else {
                lo = mid+1;
            }
        }
        pf("Case %d: ",i);
        if(ans==-1) {
            pf("impossible\n");
        } else {
            pf("%d\n",ans);
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

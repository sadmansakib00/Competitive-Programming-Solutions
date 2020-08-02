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
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,ans;
    sf("%d",&t);
    for(int x=1; x<=t; x++) {
        sf("%d",&n);
        int anArr[n];
        For(0,n) sf("%d",&anArr[i]);
        sort(anArr,anArr+n,greater<int>());
        ans = 0;
        For(0,n) {
            for(int j=i+1; j<n-1; j++) {
                int lo=j+1,hi=n-1,ok=-1;
                while(lo<=hi) {
                    int mid = lo+(hi-lo)/2;
                    if(anArr[mid]+anArr[j]>anArr[i]) {
                        lo = mid+1;
                        ok = mid-j;
                    } else {
                        hi = mid-1;
                    }
                }
                if(ok != -1) ans += ok;
            }
        }
        pf("Case %d: %d\n",x,ans);
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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

void solve() {
    int n,q,a,b;
    sf("%d%d",&n,&q);
    int anArr[n];
    For(0,n)    sf("%d",&anArr[i]);
    For(0,q) {
        sf("%d%d",&a,&b);
        int lower=-1,upper=-1,l=0,r=n-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(anArr[mid]>=a) {
                if(anArr[mid]<=b)   lower = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        l=0,r=n-1;
        while(l<=r) {
            int mid = l + (r-l)/2;
            if(anArr[mid]<=b) {
                if(anArr[mid]>=a)   upper = mid;
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        //cout << "upper = " << upper << " lower = " << lower << "\n";
        if(upper==-1 && lower==-1) {
            pf("%d\n", 0);
            continue;
        } else if(upper==-1) {
            upper = n-1;
        } else if(lower == -1) {
            lower = 0;
        }
        //cout << "upper = " << upper << " lower = " << lower << "\n";
        pf("%d\n", upper-lower+1);
    }
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d:\n",i);
        solve();
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

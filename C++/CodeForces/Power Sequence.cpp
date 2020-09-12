#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
#pragma gcc optimize("unroll-loops")
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    unsigned LL n,temp,lo=1,hi=10e11,ans=10e18,mid;
    cin >> n;
    unsigned LL anArr[n];
    For(0,n) cin >> anArr[i];
    sort(anArr,anArr+n);
    while(lo<=hi) {
        mid = lo+(hi-lo)/2;
        //cout << "mid = " << mid << "\n";
        temp = 0;
        for(unsigned LL i=0; i<n; i++) {
            LL x = long long int(pow(mid,i));
            cout << x << "\n";
            temp += abs(pow(mid,i)-anArr[i]);
        }
        //cout << temp << "\n";
        if(temp <= ans) {
            ans = temp;
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    cout << ans << "\n";

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

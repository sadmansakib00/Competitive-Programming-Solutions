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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int anArr[n], cons = 0, ans = 0, ansCons = 0;
        For(0,n) cin >> anArr[i];
        For(1,n-1) {
            if(anArr[i]>anArr[i-1] && anArr[i]>anArr[i+1]) {
                ans++, cons++;
            } else if(anArr[i]<anArr[i-1] && anArr[i]<anArr[i+1]) {
                ans++, cons++;
            } else {
                if(cons > ansCons) ansCons = cons;
                cons = 0;
            }
        }
        if(cons>ansCons) ansCons = cons;
        //cout << ansCons << "\n";
        if(ansCons > 3) ansCons = 3;
        cout << ans-ansCons << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

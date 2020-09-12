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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,k,ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        int sqrtK = sqrt(k);
        cout << "sqrtK = " << sqrtK << "\n";
        int tempK = k-sqrtK*sqrtK;
        cout << "tempK = " << tempK << "\n";
        if(tempK==0) {
            ans = 0;
        } else if(tempK>sqrtK) {
            int tempK = tempK-sqrtK;
            cout << "tempK = " << tempK << "\n";
            ans = 1+(sqrtK+1-tempK)*(sqrtK+1-tempK);
        } else {
            ans = (sqrtK-tempK)*(sqrtK-tempK);
        }
        cout << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

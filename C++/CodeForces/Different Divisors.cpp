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

    LL t,d;
    cin >> t;
    while(t-- > 0) {
        cin >> d;
        if(d==1) {
            cout << "6\n";
        } else {
            LL n,m = 0;
            if(d&1) n = d+2;
            else n = d+1;
            //cout << "n = " << n << "\n";
            while(1) {
                bool flag = 1;
                for(int i=2; i<n; i++) {
                    if(n%i==0) {
                        flag = 0;
                        break;
                    }
                }
                if(flag) break;
                else {
                    n++;
                    if(!(n&1)) n++;
                }
            }
            m = n+d;
            while(1) {
                bool flag = 1;
                for(int i=2; i<=n; i++) {
                    if(m%i==0) {
                        flag = 0;
                        break;
                    }
                }
                if(flag) break;
                else {
                    m++;
                    if(!(m&1)) m++;
                }
            }
            //cout << "n = " << n << " m = " << m << "\n";
            cout << n*m << "\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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
#define N 10000000000


int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL t,l,r,m,dif,temp,a;
    cin >> t;
    while(t-- > 0) {
        cin >> l >> r >> m;
        a = INT_MAX, dif=r-l;
        bool flag = 0;
        for(int i=l; i<=r; i++) {
            temp = m%i;
            if(temp<=dif) {
                a = i;
                flag = 0;
                break;
            }
            if(i-temp<=dif) {
                a = i;
                temp = i-temp;
                flag = 1;
                break;
            }
        }
        /*
        if(!flag) cout << "a = " << a << " n = " << m/a << " temp = " << temp << "\n";
        else cout << "a = " << a << " n = " << m/a+1 << " temp = " << temp << "\n";
        */
        if(m/a==0) cout << l << " " << l << " " << 2*l-m << "\n";
        else {
            if(!flag) cout << a << " " << r << " " << (r-temp) << "\n";
            else cout << a << " " << r-temp << " " << r << "\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

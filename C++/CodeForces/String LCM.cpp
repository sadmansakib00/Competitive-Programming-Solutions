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

    int test;
    string s,t;
    cin >> test;
    while(test-- > 0) {
        cin >> s >> t;
        string ans = "";
        int sl = s.length(), tl = t.length();
        int lcm = (sl*tl)/__gcd(sl,tl);
        bool flag = 1;
        for(int i=0,j=0,k=0; i<lcm; i++) {
            if(s[j]!=t[k]) {
                flag = 0;
                break;
            } else {
                ans += s[j];
            }
            j++,k++;
            if(j==sl) j=0;
            if(k==tl) k=0;
        }
        if(flag) {
            cout << ans << "\n";
        } else {
            cout << "-1\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

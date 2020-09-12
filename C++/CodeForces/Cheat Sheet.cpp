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

    int n,m,ans=0;
    string aStr;
    cin >> n >> m;
    map<pair<int,string>,int> aMap;
    map<pair<int,string>,int>::iterator it;
    for(int i=0; i<m; i++) {
        cin >> aStr;
        aMap[{aStr.length(),aStr}]++;
    }
    for(it=aMap.begin(); it!=aMap.end(); it++) {
        //cout << it->ff.ss << " = " << it->ff.ff << "\n";
        //cout << "n = " << n << "\n";
        if(it==aMap.begin()) {
            if(it->ff.ff <= n) ans++;
            n -= it->ff.ff;
        } else {
            if(it->ff.ff+1 <= n) ans++;
            n -= (it->ff.ff+1);
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

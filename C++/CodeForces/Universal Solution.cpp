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

    int t,sCount,pCount,rCount;
    string s;
    cin >> t;
    while(t-- >0) {
        cin >> s;
        sCount = pCount = rCount = 0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='P') pCount++;
            else if(s[i]=='R') rCount++;
            else sCount++;
        }
        if(pCount == rCount && rCount == sCount) {
            For(0,pCount) cout << "S";
            For(0,rCount) cout << "P";
            For(0,sCount) cout << "R";
        } else {
            int maxx = max(pCount,max(rCount,sCount));
            if(maxx==pCount) cout << string(s.length(),'S');
            else if(maxx==rCount) cout << string(s.length(),'P');
            else cout << string(s.length(),'R');
        }
        cout << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

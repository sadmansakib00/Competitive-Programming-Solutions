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

    unsigned LL t,n,x,minCnt,cnt,ans,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        ans = 0, minCnt = INT_MAX;
        vector<pair<LL,LL>> v;
        For(0,n) {
            cin >> temp;
            v.pb({temp,1});
        }
        int i = 0;
        while(1) {
            if(i>=v.size()) break;
            if(v[i].ff%x==0) {
                if(v[v.size()-1].ff==v[i].ff/x) v[v.size()-1].ss += v[i].ss*x;
                else v.pb({v[i].ff/x,v[i].ss*x});
            } else {
                break;
            }
            i++;
        }
        for(int i=0; i<v.size(); i++) {
            ans += v[i].ff*v[i].ss;
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

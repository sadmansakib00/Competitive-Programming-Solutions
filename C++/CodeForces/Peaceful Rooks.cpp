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

    int t,n,m,x,y;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        int ans = 0;
        map<pair<int,int>,int> aMap;
        map<pair<int,int>,int> tMap;
        map<pair<int,int>,int>::iterator it;
        bool flag[n+1]={0},marked[n+1]={0};
        for(int i=0; i<m; i++) {
            cin >> x >> y;
            flag[y]=1;
            aMap.insert({{x,y},1});
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->ff.ff!=it->ff.ss && tMap.find({it->ff.ff,it->ff.ss}) == tMap.end()) {
                if(aMap.find({it->ff.ss,it->ff.ff}) != aMap.end()) {
                    ans+=2;
                    tMap.insert({{it->ff.ss,it->ff.ff},1});
                } else {
                    ans++;
                }
            }
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

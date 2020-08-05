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

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        bool vis[n];
        mem(vis,0);
        int temp=0,maxx=0,ans=0,anArr[n];
        For(0,n) cin >> anArr[i];
        map<int,set<int>> aMap;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i!=j && aMap[anArr[i]+anArr[j]].count(i)==0 && aMap[anArr[i]+anArr[j]].count(j)==0) {
                    aMap[anArr[i]+anArr[j]].insert(i);
                    aMap[anArr[i]+anArr[j]].insert(j);
                    if(aMap[anArr[i]+anArr[j]].size()>maxx) {
                        maxx = aMap[anArr[i]+anArr[j]].size();
                    }
                }
            }
        }
        cout << maxx/2 << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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

    int t,n,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        map<int,int,greater<int>> aMap,fMap;
        map<int,int>::iterator it;
        For(0,n) {
            cin >> temp;
            aMap[temp]++;
        }
        temp = 0;
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->ss>1) {
                if(fMap[it->ff+1]==0) fMap[it->ff+1]=1;
                fMap[it->ff]=1;
            } else {
                if(fMap[it->ff+1]==0) fMap[it->ff+1]=1;
                else fMap[it->ff] = 1;
            }
        }
        cout << fMap.size() << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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
#define N 300001

int lastPos[N],firstPos[N],maxDif[N],occur[N];

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
        int minElem=INT_MAX,anArr[n];
        map<int,set<int>> aMap;
        map<int,set<int>>::iterator it;
        bool uFlag = 1;
        mem(lastPos,-1);
        mem(firstPos,-1);
        mem(maxDif,-1);
        mem(occur,0);
        For(0,n) {
            cin >> anArr[i];
            occur[anArr[i]]++;
            minElem = min(anArr[i],minElem);
            if(i>0 && anArr[i-1]!=anArr[i]) uFlag = 0;
            if(firstPos[anArr[i]]==-1) {
                firstPos[anArr[i]] = lastPos[anArr[i]] = i;
                maxDif[anArr[i]] = i+1;
            } else {
                maxDif[anArr[i]] = max(maxDif[anArr[i]],i-lastPos[anArr[i]]+1);
                lastPos[anArr[i]] = i;
            }
        }
        if(uFlag) {
            For(0,n) {
                if(i!=0) cout << " ";
                cout << minElem;
            }
            cout << "\n";
        } else {
            For(0,n) {

            }
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

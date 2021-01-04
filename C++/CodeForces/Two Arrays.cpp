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

    int t,n,un,midCount;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> un;
        midCount = 0;
        map<int,int> aMap,zero,one;
        map<int,int>::iterator it;
        int anArr[n];
        For(0,n) {
            cin >> anArr[i];
            aMap[anArr[i]]++;
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(!zero[it->ff] && !one[it->ff] && aMap[un-it->ff]) {
                zero[it->ff]++;
                one[un-it->ff]++;
            }
        }
        For(0,n) {
            if(i!=0) cout << " ";
            if(one[anArr[i]] && zero[anArr[i]]) {
                if(midCount<aMap[anArr[i]]/2) {
                    cout << "0";
                } else {
                    cout << "1";
                }
                midCount++;
            } else {
                if(zero[anArr[i]]) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            }
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

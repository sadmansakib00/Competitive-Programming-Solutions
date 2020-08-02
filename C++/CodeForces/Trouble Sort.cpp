#include<bits/stdc++.h>
using namespace std;
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
#define N 100001

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,minn,temp;
    bool odd,even,notSorted;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        odd = even = notSorted = 0;
        minn = INT_MAX;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(i==0) {
                minn = temp;
            } else {
                if(temp < minn) notSorted = 1;
            }
        }
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp&1) odd = 1;
            else even = 1;
        }
        if((even && odd) || !notSorted) cout << "Yes\n";
        else cout << "No\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

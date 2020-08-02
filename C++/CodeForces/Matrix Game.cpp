#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
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
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 1000000
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,m,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        set<int> row,col;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> temp;
                if(temp) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        if(min(n-row.size(),m-col.size())&1) cout << "Ashish\n";
        else cout << "Vivek\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

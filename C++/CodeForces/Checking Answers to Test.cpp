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

    int n,m;
    string ans,scripts[101];
    vector<PII> copies;
    cin >> n >> ans >> m;
    For(0,m) cin >> scripts[i];
    For(0,m-1) {
        for(int j=i+1; j<m; j++) {
            int r=0,w=0,ir=0,jr=0;
            for(int k=0; k<n; k++) {
                if(scripts[i][k]==ans[k]) ir++;
                if(scripts[j][k]==ans[k]) jr++;
                if(scripts[i][k]==scripts[j][k]) {
                    if(scripts[i][k]==ans[k]) r++;
                    else w++;
                }
            }
            if(r>ir/2 && r>jr/2 && 2*w>(n-ir) && 2*w>(n-jr)) copies.pb({i,j});
        }
    }
    cout << copies.size() << "\n";
    For(0,copies.size()) cout << copies[i].ff+1 << " " << copies[i].ss+1 << "\n";

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
#pragma gcc optimize("unroll-loops")
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
#define N 200001

bool vis[N];
vector<int> tempVers;
static int iters = 0;

void dfs(vector<vector<int>> &adj, int s) {
    if(vis[s]) return;
    vis[s] = 1;
    tempVers.pb(s);
    iters++;
    for(int i : adj[s]) {
        dfs(adj,i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,m,u,v,ans;
    double maxCapta;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        //mem(adj,0);
        ans = 0;
        mem(vis,0);
        maxCapta = INT_MIN;
        int inc[n],pop[n];
        double captas[n];
        vector<int> candi;
        vector<int> ansVers;
        vector<vector<int>> adj(n+1);
        For(0,n) {
            cin >> inc[i];
        }
        For(0,n) {
            cin >> pop[i];
            maxCapta = max(maxCapta,(double)inc[i]/pop[i]);
            captas[i+1] = (double)inc[i]/pop[i];
        }
        For(0,m) {
            cin >> u >> v;
            if(captas[u]==maxCapta && captas[v]==maxCapta) {
                adj[u].pb(v);
                adj[v].pb(u);
                candi.pb(u);
                candi.pb(v);
            }
        }
        For(0,candi.size()) {
            if(!vis[candi[i]]) {
                dfs(adj,candi[i]);
                if(iters > ans) {
                    ans = iters;
                    ansVers = tempVers;
                }
                iters = 0;
                tempVers.clear();
            }
        }
        cout << ans << "\n";
        for(int i=0; i<ansVers.size(); i++) {
            if(i != 0) cout << " ";
            cout << ansVers[i];
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

#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
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
#define N 300001


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int n,k,d,temp,u,v;
    cin >> n >> k >> d;
    queue<PII> q;
    bitset<N> used,vis;
    vector<vector<PII>> adj(n+1);
    for(int i=0; i<k; i++) {
        cin >> temp;
        q.push({temp,-1});
        vis[temp] = 1;
    }
    for(int i=1; i<n; i++) {
        cin >> u >> v;
        adj[u].pb({v,i});
        adj[v].pb({u,i});
    }
    while(!q.empty()) {
        int cur = q.front().ff;
        int parent = q.front().ss;
        q.pop();
        for(int i=0; i<adj[cur].size(); i++) {
            if(adj[cur][i].ff != parent && !vis[adj[cur][i].ff]) {
                used[adj[cur][i].ss] = 1;
                vis[adj[cur][i].ff] = 1;
                q.push({adj[cur][i].ff,cur});
            }
        }
    }
    temp = 0;
    for(int i=1; i<n; i++) if(!used[i]) temp++;
    cout << temp << "\n";
    int tempFlag = 0;
    for(int i=1; i<n; i++) {
        if(!used[i]) {
            if(tempFlag) cout << " ";
            cout << i;
            tempFlag = 1;
        }
    }
    cout << "\n";

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

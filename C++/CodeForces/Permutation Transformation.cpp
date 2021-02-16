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

int ans[101];
vector<int> v;

void rec(int l, int r, int level) {
    if(r<l) return;
    int maxx = v[l], maxxPos = l;
    for(int i=l+1; i<=r; i++) {
        if(maxx<v[i]) {
            maxx = v[i];
            maxxPos = i;
        }
    }
    ans[maxxPos] = level;
    rec(l,maxxPos-1,level+1);
    rec(maxxPos+1,r,level+1);
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

    int t,n,temp,maxPos;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        memset(ans,0,sizeof(ans));
        v.clear();
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp==n) maxPos = i;
            v.push_back(temp);
        }
        rec(0,maxPos-1,1);
        rec(maxPos+1,n-1,1);
        for(int i=0; i<n; i++) {
            if(i!=0) cout << " ";
            cout << ans[i];
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

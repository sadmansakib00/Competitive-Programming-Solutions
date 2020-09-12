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

    int n,pre=0;
    cin >> n;
    vector<int> ans;
    set<int> leftOut;
    int anArr[n];
    bitset<N> marker;
    For(0,n) {
        cin >> anArr[i];
        marker[anArr[i]] = 1;
    }
    For(0,n) {
        if(!marker[i]) leftOut.insert(i);
    }
    For(0,n) {
        if(pre != anArr[i]) {
            leftOut.insert(pre);
        }
        if(!leftOut.empty()) {
            ans.pb(*leftOut.begin());
            leftOut.erase(*leftOut.begin());
        } else {
            ans.pb(N);
        }
        pre = anArr[i];
    }
    for(int i=0; i<ans.size(); i++) {
        if(i != 0) cout << " ";
        cout << ans[i];
    }
    cout << "\n";

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 100001
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int anArr[n];
        vector<int> ans;
        For(0,n) {
            cin >> anArr[i];
            if(i==0) ans.push_back(anArr[i]);
            if(i>1) {
                if(!((anArr[i-1]>anArr[i-2] && anArr[i]>anArr[i-1]) ||
                     (anArr[i-1]<anArr[i-2] && anArr[i]<anArr[i-1]))) {
                        ans.push_back(anArr[i-1]);
                     }
            }
        }
        ans.push_back(anArr[n-1]);
        cout << ans.size() << "\n";
        for(int i=0; i<ans.size(); i++) {
            if(i!=0) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

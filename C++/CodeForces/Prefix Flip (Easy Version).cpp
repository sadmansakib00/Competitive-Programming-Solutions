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
#define PI acos(-1.0)
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

    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        bool flag = 1;
        char c;
        vector<bool> a,b;
        vector<int> ans;
        For(0,n) {
            cin >> c;
            a.pb(c-48);
        }
        For(0,n) {
            cin >> c;
            b.pb(c-48);
            if(a[i]!=b[i]) flag = 0;
        }
        if(flag) {
            cout << "0\n";
            continue;
        }
        for(int i=0; i<n; i++) {
            if(b[i]==a[n-i-1]) {
                if(a[0]!=b[i]) {
                    a[0] = !a[0];
                    ans.pb(1);
                    ans.pb(n-i);
                } else {
                    ans.pb(n-i);
                }
                for(int j=0; j<n-i; j++) {
                    a[j] = !a[j];
                }
                reverse(a.begin(),a.begin()+(n-i));
            }

            for(int j=0; j<n; j++) {
                cout << a[j];
            }
            cout << "\n";

        }
        ans.pb(n);
        cout << ans.size();
        for(int i=0; i<ans.size(); i++) {
            cout << " " << ans[i];
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

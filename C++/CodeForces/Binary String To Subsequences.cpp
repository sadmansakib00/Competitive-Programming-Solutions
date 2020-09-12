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
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s;
        int ans[n],cnt = 1;
        deque<int> zero,one;
        For(0,n) {
            if(s[i]-'0'==0) {
                if(one.size()>0) {
                    zero.pb(one[0]);
                    ans[i] = one[0];
                    one.pop_front();
                } else {
                    zero.pb(cnt);
                    ans[i] = cnt;
                    cnt++;
                }
            } else {
                if(zero.size()>0) {
                    one.pb(zero[0]);
                    ans[i] = zero[0];
                    zero.pop_front();
                } else {
                    one.pb(cnt);
                    ans[i] = cnt;
                    cnt++;
                }
            }
        }
        cout << cnt-1 << "\n";
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

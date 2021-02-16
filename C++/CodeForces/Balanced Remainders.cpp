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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int r[3]={0},mid=n/3,ans=0;
        For(0,n) {
            cin >> temp;
            r[temp%3]++;
        }
        if(r[0]<mid) {
            int needed = mid-r[0];
            if(r[2]>mid) {
                int got = r[2]-mid;
                if(got<needed) {
                    needed -= got;
                    ans += got;
                    got = 0;
                } else {
                    got -= needed;
                    ans += needed;
                    needed = 0;
                }
                if(needed > 0) {
                    ans += needed*2;
                } else {
                    ans += 2*got;
                }
            } else {
                ans += needed*2+mid-r[2];
            }
        } else {
            int got = r[0]-mid;
            //cout << "got = " << got << "\n";
            if(r[1]<mid) {
                int needed = mid-r[1];
                if(got<needed) {
                    ans += got;
                    needed -= got;
                    got = 0;
                } else {
                    ans += needed;
                    got -= needed;
                    needed = 0;
                }
                if(needed > 0) {
                    ans += needed*2;
                } else {
                    ans += got*2;
                }
            } else {
                ans += got*2;
                r[2] += got;
                ans += mid-r[2];
            }
        }
        cout << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

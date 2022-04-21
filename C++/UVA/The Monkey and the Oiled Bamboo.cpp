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

    LL t, n, temp;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        vector<int> v;
        for(int j=0; j<n; j++) {
            cin >> temp;
            v.pb(temp);
        }
        int lo = 1, hi = INT_MAX, mid, curr, prev, ans=0;
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            prev = 0, curr = 0;
            int tempMid = mid;
            for(int j=0; j<n; j++) {
                if(v[j]-prev>tempMid) {
                    tempMid = -1;
                    break;
                }
                if(v[j]-prev==tempMid) {
                    tempMid--;
                }
                prev = v[j];
            }
            //cout << "lo = " << lo << " hi = " << hi << " mid = " << mid << " tempMid = " << tempMid << "\n";
            if(tempMid<0) {
                lo = mid+1;
            } else {
                ans = mid;
                hi = mid-1;
            }
        }
        cout << "Case " << i << ": " << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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

    int n,q,temp,ans;
    for(int t=1; ;t++) {
        cin >> n >> q;
        if(n==0 && q==0) break;
        cout << "CASE# " << t << ":\n";
        vector<int> v;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.pb(temp);
        }
        sort(v.begin(), v.end());
        while(q-- > 0) {
            cin >> temp;
            bool flag = 0;
            int lo=0, hi=n-1, mid;
            while(lo<=hi) {
                mid = lo+(hi-lo)/2;
                //cout << " lo = " << lo << " hi = " << hi << " mid = " << mid << "\n";
                if(temp<=v[mid]) {
                    hi = mid-1;
                    if(temp==v[mid]) {
                        ans = mid;
                        flag = 1;
                    }
                } else {
                    lo = mid+1;
                }
            }
            if(flag) cout << temp << " found at " << ans+1 << "\n";
            else cout << temp << " not found\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

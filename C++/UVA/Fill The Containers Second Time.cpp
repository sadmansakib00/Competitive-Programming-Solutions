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

    int n,m,temp,ans;
    while(cin >> n) {
        cin >> m;
        vector<int> v;
        int lo=INT_MIN, hi=INT_MAX, mid, filled,curMilk;
        ans = 0;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.pb(temp);
            if(temp>lo) lo = temp;
        }
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            curMilk = 0, filled  = 0;
            for(int i=0; i<n; i++) {
                //cout << "curMilk = " << curMilk << "\n";
                curMilk += v[i];
                if(curMilk>=mid) {
                    if(curMilk==mid) curMilk = 0;
                    else curMilk = v[i];
                    filled++;
                }
            }
            if(curMilk>0) filled++;
            //cout << "lo = " << lo << " hi = " << hi << " mid = " << mid << " filled = " << filled << "\n";
            if(filled>m) {
                lo = mid+1;
            } else {
                ans = mid;
                hi = mid-1;
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

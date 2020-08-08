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
#define N 100001


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL t,n,temp,ans,maxx,maxxTerm;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ans = maxx = maxxTerm = 0;
        unordered_map<int,int> aMap;
        unordered_map<int,int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap[temp]++;
            if(aMap[temp]>maxx) {
                maxx = aMap[temp];
                maxxTerm = temp;
            }
        }
        maxx--;
        int lo=0,hi=n;
        while(lo<=hi) {
            int mid = lo+(hi-lo)/2;
            temp = maxx*mid;
            for(it=aMap.begin(); it!=aMap.end(); it++) {
                if(it->ff!=maxxTerm) {
                    if(it->ss<maxx) {
                        temp -= it->ss;
                    } else {
                        temp -= maxx;
                    }
                }
                if(temp<=0) break;
            }
            if(temp<=0) {
                lo = mid+1;
                ans = mid;
            } else {
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

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
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    int n, m, temp, ans, dif;
    string s;
    while(cin >> n) {
        vector<int> v;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.pb(temp);
        }
        cin >> m;
        sort(v.begin(), v.end());
        map<int, PII> mp;
        for(int i=0; i<n-1; i++) {
            int lo=i+1, hi=n-1, mid;
            dif = abs(m-v[i]);
            while(lo<=hi) {
                mid = lo+(hi-lo)/2;
                if(dif<=v[mid]) {
                    if(dif==v[mid]) {
                        mp.insert({v[mid]-v[i], {v[i], v[mid]}});
                    }
                    hi = mid-1;
                } else {
                    lo = mid+1;
                }
            }
        }
        cout << "Peter should buy books whose prices are " << mp.begin()->ss.ff << " and " << mp.begin()->ss.ss << ".\n\n";
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

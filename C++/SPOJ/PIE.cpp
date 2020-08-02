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
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    cout << fixed << setprecision(4);
    int t,n,f;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> f;
        f++;
        int anArr[n];
        double lo=0,hi=0,mid=0,ans=0;
        For(0,n) {
            cin >> anArr[i];
            if(anArr[i]>hi) hi = anArr[i];
        }
        while(lo<hi) {
            if(abs(lo+(hi-lo)/2-mid) < 0.00000000001) break;
            mid = lo+(hi-lo)/2;
            int counter = 0;
            for(int i=0; i<n; i++) {
                counter += (anArr[i]*anArr[i])/(mid*mid);
            }
            if(counter>=f) {
                lo = mid;
                ans = mid;
            } else {
                hi = mid;
            }
        }
        cout << PI*ans*ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

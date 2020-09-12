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

void solve() {
    double ab,ac,bc,rat;
    cin >> ab >> ac >> bc >> rat;
    double p = (ab+ac+bc)/2, triA = sqrt(p*(p-ab)*(p-bc)*(p-ac)),curTriA=triA;
    double abRbc=bc/ab, abRac=ac/ab;
    double l=0,r=ab;
    while(true) {
        ab = l + (r-l)/2;
        bc = ab*abRbc;
        ac = ab*abRac;
        p = (ab+ac+bc)/2, curTriA = sqrt(p*(p-ab)*(p-bc)*(p-ac));
        if(curTriA/(triA-curTriA) < rat) {
            l = ab;
        } else {
            r = ab;
        }
        double temp = rat-curTriA/(triA-curTriA);
        if(temp>0 && temp < 0.0000001) {
            break;
        }
    }
    cout << ab << "\n";
}

int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    cout << fixed << setprecision(10);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

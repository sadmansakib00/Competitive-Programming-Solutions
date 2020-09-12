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

    int t,n,x,y,dif,step,l;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x >> y;
        deque<int> d;
        if(n==2) {
            cout << x << " " << y << "\n";
            continue;
        }
        if((y-x)%(n-1)==0) dif = (y-x)/(n-1);
        else {
            dif = (y-x)/(n-1)+1;
            for(; dif<60; dif++) {
                if((y-x)%dif==0) break;
            }
        }
        //cout << "dif = " << dif << "\n";
        for(int i=x; i<=y; i+=dif) {
            d.pb(i);
        }
        while(d.size()<n) {
            if(d[0]-dif<1) break;
            d.push_front(d[0]-dif);
        }
        while(d.size()<n) {
            d.pb(d[d.size()-1]+dif);
        }
        for(int i=0; i<d.size(); i++) {
            if(i!=0) cout << " ";
            cout << d[i];
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

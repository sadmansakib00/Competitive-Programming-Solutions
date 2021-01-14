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

    int t,n,m,x,y;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m >> s;
        //curVal, min, max
        vector<pair<int,PII>> v(n);
        //from the end, minn, maxx
        vector<PII> vEnd(n);
        int curVal = 0, minn = 0, maxx = 0;
        for(int i=0; i<n; i++) {
            if(s[i]=='-') curVal--;
            else curVal++;
            if(curVal>maxx) maxx = curVal;
            if(curVal<minn) minn = curVal;
            v[i].ff = curVal;
            v[i].ss.ff = minn, v[i].ss.ss = maxx;
        }
        minn = 0, maxx = 0;
        for(int i=n-1; i>=0; i--) {
            if(s[i]=='-') {
                minn--;
                if(maxx>0) maxx--;
                vEnd[i].ff = minn;
                vEnd[i].ss = maxx;
            } else {
                maxx++;
                if(minn<0) minn++;
                vEnd[i].ff = minn;
                vEnd[i].ss = maxx;
            }
        }
        for(int i=0; i<m; i++) {
            cin >> x >> y;
            if(x>1) {
                minn = v[x-2].ss.ff;
                maxx = v[x-2].ss.ss;
                curVal = v[x-2].ff;
                //cout << "curVal = " << curVal << " minn = " << minn << " maxx = " << maxx << "\n";
                if(y<n) {
                    //cout << "vEnd[y].ff = " << vEnd[y].ff << " vEnd[y].ss = " << vEnd[y].ss << "\n";
                    if(curVal+vEnd[y].ff<minn) minn = curVal+vEnd[y].ff;
                    if(curVal+vEnd[y].ss>maxx) maxx = curVal+vEnd[y].ss;
                }
                //cout << "curVal = " << curVal << " minn = " << minn << " maxx = " << maxx << "\n";
                cout << maxx-minn+1 << "\n";
            } else {
                if(y<n) {
                    cout << vEnd[y].ss-vEnd[y].ff+1 << "\n";
                } else {
                    cout << "1\n";
                }
            }
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

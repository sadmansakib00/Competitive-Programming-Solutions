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

LL distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,x,y;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        LL tx = 0, ty = 0, total = 0;
        int ans[4];
        memset(ans,-1,sizeof(ans));
        vector<int> vx,vy;
        For(0,n) {
            cin >> x >> y;
            tx += x;
            ty += y;
            if(n==2) {
                vx.pb(x);
                vy.pb(y);
            }
        }
        if(tx%n==0) {
            ans[0] = tx/n;
        } else {
            int temp = abs(n*(tx/n)-tx), tempTwo = abs(n*((tx/n)+1)-tx);
            if(temp == tempTwo) {
                ans[0] = tx/n;
                ans[1] = tx/n+1;
            } else {
                if(temp<tempTwo) {
                    ans[0] = tx/n;
                } else {
                    ans[0] = tx/n+1;
                }
            }
        }
        if(ty%n==0) {
            ans[2] = ty/n;
        } else {
            int temp = abs(n*(ty/n)-ty), tempTwo = abs(n*((ty/n)+1)-ty);
            if(temp == tempTwo) {
                ans[2] = ty/n;
                ans[3] = ty/n+1;
            } else {
                if(temp<tempTwo) {
                    ans[2] = ty/n;
                } else {
                    ans[2] = ty/n+1;
                }
            }
        }
        for(int i=0; i<2; i++) {
            for(int j=2; j<4; j++) {
                if(ans[i]!=-1 && ans[j]!=-1) {
                    total++;
                }
            }
        }
        if(n==2) {
            total = max(total,distance(vx[0],vy[0],vx[1],vy[1])+1);
        }
        cout << total << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

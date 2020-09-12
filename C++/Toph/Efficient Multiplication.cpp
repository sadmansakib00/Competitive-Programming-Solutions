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
#define N INT_MAX

LL ans[3],needed;

void rec(vector<LL> v,int toggle, int add) {
    LL temp,len = v.size();
    if(toggle==1 && ans[0]!=N) {
        return;
    } else if(toggle==2 && ans[1]!=N) {
        return;
    } else if(toggle==3 && ans[2]!=N) {
        return;
    }
    for(int i=len-1; i>-1; i--) {
        for(int j=len-1; j>-1; j--) {
            temp = v[i]+v[j];
            if(temp==needed) {
                if(toggle==1) ans[0] = add+1;
                else if(toggle==2) ans[1] = add+1;
                else ans[2] = add+1;
                return;
            } else {
                auto it = find(v.begin(),v.end(),temp);
                if(it == v.end() && temp<needed) {
                    vector<LL> tv = v;
                    tv.pb(temp);
                    rec(tv,toggle,add+1);
                }
            }
        }
    }
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


    ans[0]=ans[1]=ans[2]=N;
    LL x,y;
    cin >> x >> y;
    if(x==0 || y==0) {
        cout << 1 << "\n";
    } else if(x==1 && y==1) {
        cout << "0\n";
    } else {
        needed = x*y;
        vector<LL> v;
        v.pb(x);
        rec(v,1,0);
        v.clear();
        v.pb(y);
        rec(v,2,0);
        v.pb(x);
        rec(v,3,0);
        sort(ans,ans+3);
        cout << ans[0] << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

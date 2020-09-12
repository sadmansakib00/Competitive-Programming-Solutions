#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
#pragma gcc optimize("unroll-loops")
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
#define N 200001

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL n,k,t,a,b,favA=0,favB=0,ans=0,times,alice,bob;
    cin >> n >> k;
    deque<LL> aLike,bLike,together;
    for(int i=0; i<n; i++) {
        cin >> times >> alice >> bob;
        if(alice && bob) {
            together.pb(times);
            favA++,favB++;
        } else if(alice) {
            aLike.pb(times);
            favA++;
        } else if(bob) {
            bLike.pb(times);
            favB++;
        }
    }
    if(favA<k || favB<k) cout << "-1\n";
    else {
        sort(together.begin(),together.end());
        sort(aLike.begin(),aLike.end());
        sort(bLike.begin(),bLike.end());
        for(int i=0; i<k; i++) {
            if(together.size()==0) {
                ans += aLike[0]+bLike[0];
                aLike.pop_front();
                bLike.pop_front();
            } else if(aLike.size()>0 && bLike.size()>0
               && aLike[0]+bLike[0]<together[0]) {
                ans += aLike[0]+bLike[0];
                aLike.pop_front();
                bLike.pop_front();
            } else {
                ans += together[0];
                together.pop_front();
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

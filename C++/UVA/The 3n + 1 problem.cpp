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
#define N 1000001

int cycles[N];

void preComp() {
    For(1,N) {
        LL temp=i,cnt=1;
        while(temp!=1) {
            if(temp&1) temp = 3*temp+1;
            else temp /= 2;
            cnt++;
            if(temp<N && cycles[temp]!=0) {
                cnt += cycles[temp]-1;
                break;
            }
        }
        cycles[i]=cnt;
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

    LL l,r,tl,tr,ans;
    preComp();
    while(cin >> l >>r) {
        tl = l, tr = r;
        ans = 0;
        if(tl>tr) swap(tl,tr);
        For(tl,tr+1) {
            if(ans<cycles[i]) ans = cycles[i];
        }
        cout << l << " " << r << " " << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

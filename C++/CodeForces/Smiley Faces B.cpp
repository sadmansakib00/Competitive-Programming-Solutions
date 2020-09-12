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

    string s;
    cin >> s;
    int ans=0,len=s.length(),nor[len]={0},rev[len]={0};
    for(int i=len-2; i>=0; i--) {
        if(s[i]==':' && s[i+1]==')') nor[i]=nor[i+1]+1;
        else nor[i]=nor[i+1];
    }
    for(int i=1; i<len; i++) {
        if(s[i]==':' && s[i-1]=='(') rev[i]=rev[i-1]+1;
        else rev[i]=rev[i-1];
    }
    ans = max(rev[len-1],nor[0]);
    For(0,len-1) {
        int temp = nor[i+1]+rev[i];
        if(s[0]==':' && s[i+1]==')') temp++;
        ans = max(ans,temp);
    }
    cout << ans << "\n";

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

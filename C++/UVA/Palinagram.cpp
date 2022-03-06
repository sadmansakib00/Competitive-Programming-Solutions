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

    string s;
    getline(cin, s);
    while(s != "#") {
        string ans = "";
        map<char,int> aMap;
        map<char,int>::iterator it;
        for(int i=0; i<s.length(); i++) {
            aMap[s[i]]++;
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            if(it->ss%2!=0) {
                ans += it->ff;
            }
        }
        if(ans.length()==1) ans = "";
        ans = ans.substr(0,ans.length()-1);
        cout << ans << "\n";
        getline(cin, s);
    }

    #ifdef EVAH
        openFile(opf);
        Sleep(3000);
        closeP("notepad.exe");
        closeConsole;
    #endif
}

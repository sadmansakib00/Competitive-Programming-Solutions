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

int done;
map<string, int> m3,m2,m1;
string alph = "abcdefghijklmnopqrstuvwxyz";

void rec(int level, string temp) {
    if(level==0) return;
    for(int i=0; i<26; i++) {
        if(level==3) m3[temp+alph[i]] = 0;
        else if(level==2) m2[temp+alph[i]] = 0;
        else m1[temp+alph[i]] = 0;
        rec(level-1,temp+alph[i]);
    }
}
void check(string s, map<string, int> aMap) {
    if(done) return;
    map<string,int>::iterator it;
    for(it=aMap.begin(); it!=aMap.end(); it++) {
        size_t mark = s.find(it->first);
        if(mark == string::npos) {
            cout << it->first << "\n";
            done = 1;
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    rec(3,"");
    int t,n;
    cin >> t;
    while(t-- > 0) {
        string s;
        cin >> n >> s;
        done = 0;
        check(s,m3);
        check(s,m2);
        check(s,m1);
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

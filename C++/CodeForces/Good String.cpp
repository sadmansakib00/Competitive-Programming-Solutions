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
#define PI acos(-1.0)
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

    int t,maxx;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        map<char,int> cMap;
        map<string,int> sMap;
        maxx = 0;
        For(0,s.length()) {
            cMap[s[i]]++;
        }
        for(auto it=cMap.begin(); it!=cMap.end(); it++) {
            if(maxx<it->ss) maxx=it->ss;
            //cout << it->ff << " = " << it->ss << "\n";
        }
        for(int i=0; i<10; i++) {
            for(int j=0; j<10; j++) {
                bool fOne=0,fTwo=0;
                for(int k=0; k<s.length(); k++) {
                    if(fOne && s[k]-'0'==j) fTwo = 1;
                    if(s[k]-'0'==i) fOne = 1;
                    if(fOne && fTwo) {
                        sMap[to_string(i)+to_string(j)]++;
                        fOne = fTwo = 0;
                    }
                }
            }
        }
        for(auto it=sMap.begin(); it!=sMap.end(); it++) {
            if(maxx<it->ss*2) maxx = it->ss*2;
        }
        if(s.length()<=maxx) cout << "0\n";
        else cout << s.length()-maxx << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

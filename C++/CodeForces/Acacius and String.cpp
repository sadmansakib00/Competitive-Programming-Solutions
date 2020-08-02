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

    int t,n;
    string s,rs="abacaba";
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s;
        int total = 0;
        bool flag = 0;
        for(int i=0; i<n-6; i++) {
            string ts = s.substr(i,7);
            if(ts == rs) {
                total++;
                if(total>1) break;
            }
        }
        if(total == 2) {
            cout << "No\n";
        } else if(total == 1) {
            for(int i=0; i<n; i++) {
                if(s[i]=='?') s[i] = 'z';
            }
            cout << "Yes\n" << s << "\n";
        } else {
            bool anotherFlag = 1;
            for(int i=0; i<n-6; i++) {
                string ts = s.substr(i,7);
                flag = 1;
                for(int j=0; j<7; j++) {
                    if(!(ts[j]==rs[j] || ts[j]=='?')) flag = 0;
                }
                if(flag) {
                    string dup = s;
                    for(int j=0; j<7; j++) {
                        dup[i+j] = rs[j];
                    }
                    total = 0;
                    for(int j=0; j<n-6; j++) {
                        string ts = dup.substr(j,7);
                        if(ts == rs) {
                            total++;
                            if(total>1) break;
                        }
                    }
                    if(total!=1) continue;
                    anotherFlag = 0;
                    for(int j=0; j<7; j++) {
                        s[i+j] = rs[j];
                    }
                    for(int j=0; j<n; j++) {
                        if(s[j]=='?') s[j] = 'z';
                    }
                    cout << "Yes\n";
                    cout << s << "\n";
                    break;
                }
            }
            if(anotherFlag) {
                cout << "No\n";
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

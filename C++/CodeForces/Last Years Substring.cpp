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

    int t,n;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s;
        size_t b = s.find("2020");
        if(b!=string::npos && (b==0 || b==n-4)) {
            cout << "YES\n";
        } else {
            string t1(""),t2("");
            for(int i=0; i<n; i++) {
                if(t1.length()==4) break;
                if(s[i]=='2' || s[i]=='0') {
                    if(t1.length()==0) {
                        if(s[i]=='2') t1 += s[i];
                        else break;
                    } else {
                        if(t1[t1.length()-1]!=s[i]) t1 += s[i];
                        else break;
                    }
                } else {
                    break;
                }
            }
            for(int i=n-1; i>=0; i--) {
                if(t1.length()+t2.length()==4) break;
                if(s[i]=='2' || s[i]=='0') {
                    if(t2.length()==0) t2 = s[i] + t2;
                    else {
                        if(t2[0]!=s[i]) t2 = s[i] + t2;
                        else break;
                    }
                } else {
                    break;
                }
            }
            //cout << "t1 = " << t1 << " t2 = " << t2 << "\n";
            if(n>=4 && t1+t2=="2020") {
                cout << "YES\n";
            } else {
                cout << "NO\n";
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

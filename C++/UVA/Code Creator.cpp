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

    int n,t=1;
    string s;
    cin >> n;
    while(n!=0) {
        cout << "Case " << t << ":\n";
        cout << "#include<string.h>\n#include<stdio.h>\nint main()\n\{" << "\n";
        getline(cin,s);
        for(int i=1; i<=n; i++) {
            getline(cin, s);
            cout << "printf(\"";
            for(int j=0; j<s.length(); j++) {
                if(s[j]=='\\' || s[j]=='\"') {
                    cout << "\\" << s[j];
                } else {
                    cout << s[j];
                }
            }
            cout << "\\n\");" << "\n";
        }
        cout << "printf(\"\\n\");\nreturn 0;\n}" << "\n"; //"\r" works as a carriage which moves the cursor to the start of the line
        t++;
        cin >> n;
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

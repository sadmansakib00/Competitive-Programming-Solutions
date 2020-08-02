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

    LL k,num = 1;
    cin >> k;
    unordered_map<char,LL> aMap;
    string aStr = "codeforces";
    for(int i=0; i<10; i++) {
        aMap[aStr[i]] = 1;
    }
    int curIndex = 9;
    if(k == 1) {
        cout << aStr << "\n";
    } else {
        while(num < k) {
            aMap[curIndex]++;
            num = 1;
            for(auto it = aMap.begin(); it != aMap.end(); it++) {
                num *= (it->second);
            }
            curIndex--;
            if(curIndex < 0) curIndex = 9;
        }
        for(int j=0; j<10; j++) {
            for(int i=0; i<aMap[j]; i++) {
                cout << aStr[j];
            }
        }
        cout << "\n";
    }
    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

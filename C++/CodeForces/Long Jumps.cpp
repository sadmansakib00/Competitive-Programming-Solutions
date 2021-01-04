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

    LL t,n,temp,ans;
    cin >> t;
    while(t-- >0) {
        cin >> n;
        int anArr[n];
        bool flag[n] = {0};
        For(0,n) {
            cin >> anArr[i];
        }
        ans = 0;
        For(0,n) {
            temp = anArr[i];
            //cout << "First Temp = " << temp << "\n";
            for(int j=i+anArr[i]; j<n; j += anArr[j]) {
                //cout << "i = " << i << " j = " << j << "\n";
                if(flag[j]) break;
                else flag[j] = 1;
                temp += anArr[j];
                //cout << "Temp = " << temp << "\n";
                if(temp > ans) {
                    ans = temp;
                }
            }
            if(temp>ans) ans = temp;
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

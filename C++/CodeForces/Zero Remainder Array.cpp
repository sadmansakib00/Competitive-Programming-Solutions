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

    LL t,k,n,maxApp,maxNo,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        maxNo = maxApp = 0;
        map<LL,LL> aMap;
        For(0,n) {
            cin >> temp;
            aMap[k-temp%k]++;
            if(temp%k!=0 && aMap[k-temp%k] > maxApp) {
                maxApp = aMap[k-temp%k];
                maxNo = k-temp%k;
            }
            if(temp%k!=0 && aMap[k-temp%k] == maxApp && k-temp%k>maxNo) {
                maxNo = k-temp%k;
            }
        }
        //cout << "maxApp = " << maxApp << " maxNo = " << maxNo << "\n";
        if(maxApp!=0) temp = (maxApp-1)*k+maxNo+1;
        else temp = 0;
        cout << temp << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

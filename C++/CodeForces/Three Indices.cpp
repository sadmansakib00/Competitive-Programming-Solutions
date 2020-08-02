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

struct data {
    int val,lMin=INT_MAX,rMin=INT_MAX,pi,pk;
};

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
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        bool flag = 0;
        data anArr[n];
        for(int i=0; i<n; i++) {
            cin >> anArr[i].val;
            if(i==0) {
                anArr[i].lMin = anArr[i].val;
                anArr[i].pi = 1;
            } else {
                if(anArr[i-1].lMin < anArr[i].val) {
                    anArr[i].lMin = anArr[i-1].lMin;
                    anArr[i].pi = anArr[i-1].pi;
                } else {
                    anArr[i].lMin = anArr[i].val;
                    anArr[i].pi = i+1;
                }
            }
        }
        for(int i=n-1; i>=0; i--) {
            if(i==n-1) {
                anArr[i].rMin = anArr[i].val;
                anArr[i].pk = n;
            } else {
                if(anArr[i+1].rMin < anArr[i].val) {
                    //cout << "Here I am\n";
                    anArr[i].rMin = anArr[i+1].rMin;
                    anArr[i].pk = anArr[i+1].pk;
                } else {
                    anArr[i].rMin = anArr[i].val;
                    anArr[i].pk = i+1;
                }
            }
        }
        for(int i=0; i<n; i++) {
            //cout << "i = " << i << " lMin = " << anArr[i].lMin << " pi = " << anArr[i].pi << " val = " << anArr[i].val << " rMin = " << anArr[i].rMin << " pk = " << anArr[i].pk << "\n";
            if(anArr[i].val > anArr[i].lMin && anArr[i].val > anArr[i].rMin) {
                flag = 1;
                cout << "YES\n";
                cout << anArr[i].pi << " " << i+1 << " " << anArr[i].pk << "\n";
                break;
            }
        }
        if(!flag) cout << "NO\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

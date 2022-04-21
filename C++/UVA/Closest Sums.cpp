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

    for(int t=1; ; t++) {
        int n,m,temp;
        cin >> n;
        if(n==0) break;
        cout << "Case " << t << ":\n";
        vector<int> v,w;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.pb(temp);
        }

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                w.pb(v[i]+v[j]);
            }
        }
        sort(w.begin(), w.end());
        cin >> m;
        for(int i=0; i<m; i++) {
            cin >> temp;
            int l=0, r=w.size()-1, m1, m2;
            while(l<r) {
                m1 = l+(r-l)/3;
                m2 = r-(r-l)/3;
                int dif1 = abs(temp-w[m1]);
                int dif2 = abs(temp-w[m2]);
                if(dif1<=dif2) {
                    r = m2-1;
                } else {
                    l = m1+1;
                }
            }
            cout << "Closest sum to " << temp << " is " << w[r] << ".\n";
        }
    }


    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

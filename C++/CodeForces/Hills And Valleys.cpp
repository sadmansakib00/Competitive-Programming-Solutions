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
        int anArr[n], cons = 0, ansCons = 0, ans = 0, temp=0;
        For(0,n) cin >> anArr[i];
        For(1,n-1) {
            if(anArr[i]>anArr[i-1] && anArr[i]>anArr[i+1]) {
                ans++;
            } else if(anArr[i]<anArr[i-1] && anArr[i]<anArr[i+1]) {
                ans++;
            }
        }
        //cout << "Pre ans = " << ans << "\n";
        if(n<5) {
            ans = 0;
        } else {
            for(int i=4; i<n; i++) {
                cons = temp = 0;
                if((anArr[i-3]>anArr[i-4] && anArr[i-3]>anArr[i-2]) ||
                   (anArr[i-3]<anArr[i-4] && anArr[i-3]<anArr[i-2])) {
                    cons++;
                }
                if((anArr[i-2]>anArr[i-3] && anArr[i-2]>anArr[i-1]) ||
                   (anArr[i-2]<anArr[i-3] && anArr[i-2]<anArr[i-1])) {
                    cons++;
                }
                if((anArr[i-1]>anArr[i-2] && anArr[i-1]>anArr[i]) ||
                   (anArr[i-1]<anArr[i-2] && anArr[i-1]<anArr[i])) {
                    cons++;
                }
                if((anArr[i-3]>anArr[i-4] && anArr[i-3]>anArr[i-1]) ||
                   (anArr[i-3]<anArr[i-4] && anArr[i-3]<anArr[i-1])) {
                    temp++;
                }
                if(temp==1) {
                   if((anArr[i-1]>anArr[i-3] && anArr[i-1]>anArr[i]) ||
                   (anArr[i-1]<anArr[i-3] && anArr[i-1]<anArr[i])) {
                        temp = 1;
                   } else {
                        temp = 0;
                   }
                }

                if(temp) {
                    if((anArr[i-1]>anArr[i-2] && anArr[i-1]>anArr[i]) ||
                       (anArr[i-1]<anArr[i-2] && anArr[i-1]<anArr[i])) {
                        temp = 1;
                    } else if(i>4) {
                        if((anArr[i-4]>anArr[i-5] && anArr[i-4]>anArr[i-2]) ||
                           (anArr[i-4]<anArr[i-5] && anArr[i-4]<anArr[i-2])) {
                            temp++;
                        } else {
                            temp = 0;
                        }
                    } else {
                        temp = 0;
                    }
                }
                if(temp) {
                    if((anArr[i-3]>anArr[i-4] && anArr[i-3]>anArr[i-2]) ||
                       (anArr[i-3]<anArr[i-4] && anArr[i-3]<anArr[i-2])) {
                        temp = 1;
                    } else if(i<n-1) {
                        if((anArr[i]>anArr[i-2] && anArr[i]>anArr[i+1]) ||
                           (anArr[i]<anArr[i-2] && anArr[i]<anArr[i+1])) {
                            temp = 1;
                        } else {
                            temp = 0;
                        }
                    } else {
                        temp = 0;
                    }
                }
                if(ansCons<cons-temp) ansCons = cons-temp;
                //cout << "ansCons = " << ansCons << " cons = " << cons << " temp = " << temp << "\n";
            }
        }
        cout << ans-ansCons << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

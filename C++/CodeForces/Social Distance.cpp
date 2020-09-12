#include<bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
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
#define N 100001

bool comp(PII l, PII r) {
    if(l.ff <= r.ff) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,k,zeroes,ans,firstOne,lastOne;
    bool flag,initFlag;
    string str;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k >> str;
        zeroes = 0;
        ans = 1;
        firstOne = lastOne = -1;
        for(int i=0; i<n; i++) {
            if(str[i] == '1') {
                firstOne = i;
                break;
            } else {
                if(i>0) {
                    zeroes++;
                    if(zeroes == k+1) {
                        ans++;
                        zeroes = 0;
                    }
                }
            }
        }
        if(firstOne == -1) {
            if(ans == 0) ans = 1;
            cout << ans << "\n";
            continue;
        }
        for(int i=n-1; i>=0; i--) {
            if(str[i]=='1') {
                lastOne = i;
                break;
            }
        }
        ans = 0;
        zeroes = 0;
        for(int i=firstOne-1; i>=0; i--) {
            zeroes++;
            if(zeroes == k+1) {
                ans++;
                zeroes = 0;
            }
        }
        zeroes = 0;
        for(int i=lastOne+1; i<n; i++) {
            zeroes++;
            if(zeroes == k+1) {
                ans++;
                zeroes = 0;
            }
        }
        zeroes = 0;
        for(int i=firstOne+1; i<lastOne; i++) {
            if(str[i] == '0') {
                zeroes++;
                if(zeroes==2*k+1) {
                    ans++;
                    zeroes=k;
                }
            } else {
                zeroes = 0;
            }
        }
        cout << ans << "\n";
    }

    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

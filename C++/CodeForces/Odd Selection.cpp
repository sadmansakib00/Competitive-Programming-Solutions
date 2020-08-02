#include<bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize("Ofast")
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
#define MIVI map<int,vector<int>>
#define UMIVI unordered_map<int,vector<int>>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 200001

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif
    int t,n,x,temp,odd,even;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        odd = 0;
        even = 0;
        For(0,n) {
            cin >> temp;
            if(temp&1)  odd++;
            else   even++;
        }
        //cout << "odd = " << odd << " even = " << even << "\n";
        if(x&1) {
            if(x<=odd) cout << "Yes\n";
            else {
                if(odd&1) {
                    if(odd>0 && x-odd <= even) cout << "Yes\n";
                    else cout << "No\n";
                } else {
                    if(odd>0 && x-odd+1 <= even) cout << "Yes\n";
                    else cout << "No\n";
                }
            }
        } else {
            if(x-1<=odd) {
                if(even>0) cout << "Yes\n";
                else cout << "No\n";
            } else {
                if(odd&1) {
                    if(odd>0 && x-odd<=even) cout << "Yes\n";
                    else cout << "No\n";
                } else {
                    if(odd>0 && x-odd+1<=even) cout << "Yes\n";
                    else cout << "No\n";
                }
            }
        }
    }
    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

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

    LL t,n,s,temp=0,dif,inHand;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> s;
        inHand = 0;
        string aStr = to_string(n);
        int ans[101];
        mem(ans,-1);
        temp = 0;
        for(int i=0; i<aStr.length(); i++) {
            if(aStr[i]-'0'<=s) {
                if(temp==0) temp = aStr[i]-'0';
                else temp = temp*10+aStr[i]-'0';
                s -= (aStr[i]-'0');
            } else {
                if(i==0 && temp==0) temp = 1,s--;
                temp *= 10;
            }
        }
        if(temp-n>=0) cout << temp-n << "\n";
        else {
            LL x = 1,flag=0;
            aStr = to_string(temp);
            for(int i=aStr.length()-1; i>=0; i--) {
                if(s>0) {
                    if(x+temp>n) {
                        cout << x+temp-n << "\n";
                        flag = 1;
                        break;
                    }
                } else {
                    s += (aStr[i]-'0');
                    temp = temp/(x*10);
                    temp = temp*x*10;
                }
                x *= 10;
            }
            if(!flag) {
                temp = 1;
                for(int i=0; i<aStr.length(); i++) temp *= 10;
                cout << temp - n << "\n";

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

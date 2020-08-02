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


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,cornerCase,total;
    vector<int> arr(10);
    cin >> t;
    while(t-- > 0) {
        total = 0;
        For(0,10)   {
            cin >> arr[i];
            if(i%4==0) {
                total += arr[i];
                if(arr[i]>0) cornerCase = i;
            }
        }
        vector<int> tempArr(arr.begin(),arr.end());
        vector<string> ans;
        string tempAns = "";
        for(int i=0; i<100; i+=4) {
            bool flag = 0;
            int f=i/10, s=i%10;
            if(f==s) {
                if(arr[f]>=2) {
                    flag = 1;
                    arr[f] -= 2;
                }
            } else {
                if(arr[f]>0 && arr[s]>0) {
                    flag = 1;
                    arr[f]--;
                    arr[s]--;
                }
            }
            if(flag) {
                for(int j=9; j>=0; j--) {
                    tempAns += string(arr[j],(char)(j+48));
                }
                tempAns += to_string(f)+to_string(s);
                ans.pb(tempAns);
                tempAns = "";
            }
            arr = tempArr;
            //for(int j=0; j<10; )
        }
        if(ans.size()==0) {
            if(total>0) {
                if(cornerCase%4==0) cout << cornerCase << "\n";
                else cout << "-1\n";
            } else {
                cout << "-1\n";
            }
        } else {
            sort(ans.begin(),ans.end(),greater<string>());
            if(ans[0][0]=='0') cout << "0\n";
            else cout << ans[0] << "\n";
        }
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

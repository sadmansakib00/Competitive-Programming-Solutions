#include<iostream>
#include<math.h>

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
#define INT_MAX 2147483647
#define INT_MIN -2147483648

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int n,q,l,r,len;
    cin >> n >> q;
    int arr[n];
    len = sqrt(n)+1;
    int maxx[len], minn[len];
    fill(maxx, maxx+len, INT_MIN);
    fill(minn, minn+len, INT_MAX);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    for(int i=0; i<n; i++) {
        if(maxx[i/len]<arr[i]) {
            maxx[i/len] = arr[i];
        }
        if(minn[i/len]>arr[i]) {
            minn[i/len] = arr[i];
        }
    }

    while(q-- > 0) {
        cin >> l >> r;
        --l, --r;
        int ansMax = INT_MIN, ansMin = INT_MAX, c_l = l/len, c_r = r/len;
        if(c_l == c_r) {
            for(int i=l; i<=r; i++) {
                if(ansMax < arr[i]) ansMax = arr[i];
                if(ansMin > arr[i]) ansMin = arr[i];
            }
        } else {
            for(int i=l, j=(c_l+1)*len; i<j; i++) {
                if(ansMax < arr[i]) ansMax = arr[i];
                if(ansMin > arr[i]) ansMin = arr[i];
            }
            for(int i=c_l+1; i<c_r; i++) {
                if(ansMax < maxx[i]) ansMax = maxx[i];
                if(ansMin > minn[i]) ansMin = minn[i];
            }
            for(int i=c_r*len; i<=r; i++) {
                if(ansMax < arr[i]) ansMax = arr[i];
                if(ansMin > arr[i]) ansMin = arr[i];
            }
        }
        cout << ansMax-ansMin << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

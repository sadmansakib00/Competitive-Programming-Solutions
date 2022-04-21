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

    int n,x,y,temp;
    while(cin >> n) {
        priority_queue<int> pq;
        queue<int> q;
        stack<int> s;
        bool fpq=1, fq=1, fs=1;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            if(x==1) {
                pq.push(y);
                q.push(y);
                s.push(y);
            } else {
                if(pq.size()!=0) {
                    temp = pq.top();
                    pq.pop();
                    if(temp!=y) fpq = 0;
                } else fpq = 0;
                if(q.size()!=0) {
                    temp = q.front();
                    q.pop();
                    if(temp!=y) fq = 0;
                } else fq = 0;
                if(s.size()!=0) {
                    temp = s.top();
                    s.pop();
                    if(temp!=y) fs = 0;
                } else fs = 0;
            }
        }
        if(!fpq && !fq && !fs) cout << "impossible\n";
        else if((fpq && fq) || (fq && fs) || (fs && fpq)) cout << "not sure\n";
        else if(fpq) cout << "priority queue\n";
        else if(fq) cout << "queue\n";
        else cout << "stack\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

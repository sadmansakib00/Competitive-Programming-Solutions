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
#define FOR(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 100001

LL arr[N],opSt[2*N],arrSt[2*N];
bool toggle;     //false=opSt .. true=arrSt
void build(int v, int tl, int tr) {
    if(tl==tr) arrSt[v]=arr[tl];
    else {
        int mid = (tl+tr)/2;
        build(v+1,tl,mid);
        build(stv,mid+1,tr);
    }
}
void update(int v, int tl, int tr, int l, int r, LL val) {
    if(tl>r || tr<l) return;
    if(tl>=l && tr<=r) {
        if(toggle)  arrSt[v]+=val;
        else  opSt[v]+=val;
    } else {
        int mid = (tl+tr)/2;
        update(v+1,tl,mid,l,r,val);
        update(stv,mid+1,tr,l,r,val);
    }
}
LL getVal(int v, int tl, int tr, int pos) {
    if(tl==tr) {
        if(toggle)  return arrSt[v];
        else    return opSt[v];
    } else {
        int mid = (tl+tr)/2;
        LL temp;
        if(pos<=mid)   temp = getVal(v+1,tl,mid,pos);
        else    temp = getVal(stv,mid+1,tr,pos);
        if(toggle) return arrSt[v]+temp;
        else return opSt[v]+temp;
    }
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
    mem(opSt,0);
    mem(arrSt,0);
    int n,m,k,x,y,d;
    cin >> n >> m >> k;
    vector<pair<pair<int,int>,LL>> ops;
    ops.push_back({{-1,-1},-1});
    FOR(0,n) cin >> arr[i];
    FOR(0,m) {
        cin >> x >> y >> d;
        ops.push_back({{x,y},d});
    }
    toggle = false;
    FOR(0,k) {
        cin >> x >> y;
        update(1,1,m,x,y,1);
    }
    build(1,0,n-1);
    FOR(1,m+1) {
        toggle = false;
        LL temp = getVal(1,1,m,i);
        toggle = true;
        update(1, 1, n, ops[i].ff.ff, ops[i].ff.ss, ops[i].ss*temp);
    }
    FOR(1,n+1) {
        if(i!=1) cout << " ";
        cout << getVal(1,1,n,i);
    }
    cout << "\n";
    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

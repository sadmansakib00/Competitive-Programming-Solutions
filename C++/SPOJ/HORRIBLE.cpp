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
#define N 100005

LL tree[4*N],lazy[4*N],arr[N];

void propagate(int v, int tl, int tr) {
    //if(lazy[v] == 0) return;
    if(tl!=tr) {
        lazy[2*v] += lazy[v];
        lazy[2*v+1] += lazy[v];
    }
    tree[v] += (lazy[v]*(tr-tl+1));
    lazy[v] = 0;
}

void build(int v, int tl, int tr) {
    lazy[v] = 0;
    if(tl==tr) {
        tree[v] = arr[tl];
    } else {
        int mid = tl+(tr-tl)/2;
        build(2*v,tl,mid);
        build(2*v+1,mid+1,tr);
        tree[v] = tree[2*v]+tree[2*v+1];
    }
}
void update(int v, int tl, int tr, int l, int r, int val) {
    if(tr<l || tl>r) return;
    propagate(v,tl,tr);
    if(l>=tl && r<=tr) {
        lazy[v] += val;
        propagate(v, tl, tr);
        return;
    }
    int mid = tl+(tr-tl)/2;
    update(2*v,tl,mid,l,r,val);
    update(2*v+1,mid+1,tr,l,r,val);
    tree[v] = tree[2*v]+tree[2*v+1];
}

LL query(int v, int tl, int tr, int l, int r) {
    propagate(v,tl,tr);
    if(tr<l || tl>r) return 0;

    if(tl>=l && tr<=r) return tree[v];
    int mid = tl+(tr-tl)/2;
    LL lq = query(2*v, tl, mid, l, r);
    LL rq = query(2*v+1, mid+1, tr, l, r);
    return lq+rq;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    int t,n,c,qt,p,q,v;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> c;
        mem(arr,0);
        build(1,1,n);
        For(0,c) {
            cin >> qt;
            if(qt==0) {
                cin >> p >> q >> v;
                update(1,1,n,p,q,v);
            } else {
                cin >> p >> q;
                cout << query(1,1,n,p,q) << "\n";
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

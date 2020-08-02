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
#define stv v+2*(mid-tl+1)
#define N 100001
int *arr;
set<int> *st;
void build(int v, int tl, int tr) {
    //pf("v=%d  tl=%d  tr=%d\n",v,tl,tr);
    if(tl==tr) {
        st[v].insert(arr[tl]);
    } else {
        int mid = (tl+tr)/2;
        build(v+1, tl, mid);
        build(stv, mid+1, tr);
        st[v].insert(st[v+1].begin(),st[v+1].end());
        st[v].insert(st[stv].begin(),st[stv].end());
    }
}
set<int> getDistinct(int v, int tl, int tr, int l, int r) {
    set<int> left, right, result;
    if(tl>r || tr<l) return result;
    if(tl>=l && tr<=r) return st[v];
    int mid = (tl+tr)/2;
    left = getDistinct(v+1,tl,mid,l,r);
    right = getDistinct(stv,mid+1,tr,l,r);
    //result.insert(left.begin(),left.end());
    //result.insert(right.begin(), right.end());
    merge(left.begin(),left.end(),
          right.begin(),right.end(),
          inserter(result,result.begin()));
    return result;
}
void solve() {
    int n,q,x,y;
    sf(" %d%d",&n,&q);
    arr = new int[n];
    st = new set<int>[2*N];
    for(int i=0; i<n; i++) sf("%d",&arr[i]);
    build(1,0,n-1);
    while(q-- > 0) {
        sf("%d%d",&x,&y);
        pf("%d\n",getDistinct(1,1,n,x,y).size());
    }
    //delete[] arr;
    //delete[] st;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif
    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d:\n",i);
        solve();
    }
    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

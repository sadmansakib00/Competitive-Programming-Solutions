#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define N 100001
int anArr[N], st[3*N];
void build(int v, int tl, int tr) {
    if(tl == tr) {
        st[v] = anArr[tl];
    } else {
        int tm = (tl+tr)/2;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        st[v] = min(st[v*2],st[v*2+1]);
    }
}
int getMin(int v, int tl, int tr, int l, int r) {
    if(l>tr || r<tl) return INT_MAX;
    if(tl>=l && tr<=r) {
        return st[v];
    }
    int tm = (tl+tr)/2;
    return min(getMin(v*2, tl, tm, l, r),
            getMin(v*2+1, tm+1, tr, l, r));
}
void solve() {
    int n,q,l,r;
    sf("%d%d",&n,&q);
    for(int i=0; i<n; i++) sf("%d",&anArr[i]);
    build(1,0,n-1);
    while(q-- > 0) {
        sf("%d%d",&l,&r);
        pf("%d\n",getMin(1,1,n,l,r));
    }
}
int main() {
    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d:\n",i);
        solve();
    }
}

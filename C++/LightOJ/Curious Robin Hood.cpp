#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define N 100001
int arr[N], st[3*N];
void build(int v,int tl, int tr) {
    if(tl==tr) {
        st[v]=arr[tl];
    } else {
        int tm = (tl+tr)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        st[v]=st[2*v]+st[2*v+1];
    }
}
int getSum(int v,int tl, int tr, int l, int r) {
    if(l>tr || r<tl) return 0;
    if(tl>=l && tr<=r) return st[v];
    int tm = (tl+tr)/2;
    return getSum(v*2,tl,tm,l,r)+
            getSum(v*2+1,tm+1,tr,l,r);
}
void update(int v, int tl, int tr, int i, int x) {
    if(i>tr || i<tl) return;
    if(tl==tr) {
        st[v] = x;
        return;
    }
    int tm = (tl+tr)/2;
    update(v*2,tl,tm,i,x);
    update(v*2+1,tm+1,tr,i,x);
    st[v] = st[v*2]+st[v*2+1];
}
void solve() {
    int n,q,no,i,j,ans;
    sf("%d%d",&n,&q);
    for(int i=0; i<n; i++) sf("%d",&arr[i]);
    build(1,0,n-1);
    while(q-- > 0) {
        sf("%d",&no);
        if(no==1) {
            sf("%d",&i);
            i++;
            pf("%d\n",getSum(1,1,n,i,i));
            update(1,1,n,i,0);
        } else if(no==2) {
            sf("%d%d",&i,&j);
            i++;
            update(1,1,n,i,getSum(1,1,n,i,i)+j);
        } else {
            sf("%d%d",&i,&j);
            i++,j++;
            pf("%d\n",getSum(1,1,n,i,j));
        }
    }
}
int main() {
    int t; sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d:\n",i);
        solve();
    }
}

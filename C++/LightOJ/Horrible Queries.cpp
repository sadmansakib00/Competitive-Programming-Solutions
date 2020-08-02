#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL st[2*100005],prop[2*100005];
void update(LL v, LL tl, LL tr, LL l, LL r, LL add) {
    if(tl>r || tr<l) return;
    if(tl>=l && tr<=r) {
        st[v] += (tr-tl+1)*add;
        prop[v] += add;
    } else {
        LL tm = (tl+tr)/2;
        update(v+1,tl,tm,l,r,add);
        update(v+2*(tm-tl+1),tm+1,tr,l,r,add);
        st[v]=st[v+1]+st[v+2*(tm-tl+1)]+prop[v]*(tr-tl+1);
    }
}
LL getSum(LL v, LL tl, LL tr, LL l, LL r, LL n) {
    if(tl>r || tr<l) return 0;
    if(tl>=l && tr<=r) {
        return st[v]+n*(tr-tl+1);
    } else {
        LL tm = (tl+tr)/2;
        return getSum(v+1,tl,tm,l,r,prop[v]+n)+
            getSum(v+2*(tm-tl+1),tm+1,tr,l,r,prop[v]+n);
    }
}
void solve() {
    int n,q,qt,x,y,v;
    memset(st,0,sizeof(st));
    memset(prop,0,sizeof(prop));
    scanf("%d%d",&n,&q);
    while(q-- > 0) {
        scanf("%d",&qt);
        if(qt==0) {
            scanf("%d%d%d",&x,&y,&v);
            update(1,1,n,x+1,y+1,v);
        } else {
            scanf("%d%d",&x,&y);
            printf("%lld\n",getSum(1,1,n,x+1,y+1,0));
        }
    }
}
int main() {
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++) {
        printf("Case %d:\n",i);
        solve();
    }
}

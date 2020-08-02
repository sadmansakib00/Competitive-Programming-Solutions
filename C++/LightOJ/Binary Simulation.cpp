#include<bits/stdc++.h>
using namespace std;
string s;
bool st[2*100001];
void build(int v,int tl,int tr) {
    if(tl==tr) {
        st[v] = s[tr]-'0';
    } else {
        int tm = (tl+tr)/2;
        build(v+1,tl,tm);
        build(v+2*(tm-tl+1),tm+1,tr);   //v+2*(tm-tl+1)
        st[v]=0;
    }
}
void update(int v, int tl, int tr, int l, int r) {
    if(l>tr || r<tl) return;
    if(tl>=l && tr<=r) {
        st[v] = !st[v];
    } else {
        int tm = (tl+tr)/2;
        update(v+1,tl,tm,l,r);
        update(v+2*(tm-tl+1),tm+1,tr,l,r);
    }
}
bool get(int v, int tl, int tr, int pos) {
    if(tl == tr) return st[v];
    int tm = (tl+tr)/2;
    if(pos <= tm) {
        bool x = get(v+1, tl, tm, pos);
        return st[v] ? !x : x;
    } else {
        bool x = get(v+2*(tm-tl+1),tm+1,tr,pos);
        return st[v] ? !x : x;
    }
}
void solve() {
    int q,i,j;
    char qt;
    cin >> s >> q;
    build(1,0,s.length()-1);
    while(q-- > 0) {
        scanf(" %c",&qt);
        if(qt=='I') {
            scanf("%d%d",&i,&j);
            update(1,1,s.length(),i,j);
        } else {
            scanf("%d",&i);
            printf("%d\n",get(1,1,s.length(),i));
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

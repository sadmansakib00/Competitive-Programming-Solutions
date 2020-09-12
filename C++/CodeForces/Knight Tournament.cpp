#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
#define PPII pair<int,PII>
#define ff first
#define ss second
int st[2*300001];
bool marked[2*300001];
void push(int v,int r) {
    if(marked[v]) {
        st[v+1] = st[v];
        st[r] = st[v];
        marked[v+1]=true;
        marked[r]=true;
        marked[v]=false;
    }
}
void update(int v,int tl, int tr, int l, int r, int add) {
    if(tr<l || tl>r) return;
    if(tl>=l && tr<=r) {
        marked[v]=true;
        st[v] = add;
    } else {
        int tm = (tl+tr)/2;
        push(v,v+2*(tm-tl+1));
        update(v+1,tl,tm,l,r,add);
        update(v+2*(tm-tl+1),tm+1,tr,l,r,add);
    }
}
int get(int v,int tl, int tr, int pos) {
    if(tl==tr) return st[v];
    int tm = (tl+tr)/2;
    push(v,v+2*(tm-tl+1));
    if(pos<=tm)
        return get(v+1,tl,tm,pos);
    else
        return get(v+2*(tm-tl+1),tm+1,tr,pos);
}
int main() {
    ios_base::sync_with_stdio(false);
    int n,m,l,r,x;
    stack<PPII> q;
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> l >> r >> x;
        q.push({l,{r,x}});
        //update(1,1,n,l,r,x);
    }
    while(!q.empty()) {
        PPII temp = q.top();
        q.pop();
        update(1,1,n,temp.ff,temp.ss.ss-1,temp.ss.ss);
        update(1,1,n,temp.ss.ss+1,temp.ss.ff,temp.ss.ss);
    }
    for(int i=1; i<=n; i++) {
        if(i!=1) cout << " ";
        cout << get(1,1,n,i);
    }
    cout << "\n";
}

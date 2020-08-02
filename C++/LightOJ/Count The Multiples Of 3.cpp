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
int ans, prop[2*N], modZero[2*N], modOne[2*N], modTwo[2*N];
void build(int v, int tl, int tr) {
    if(tl==tr) {
        modZero[v] = 1;
    } else {
        int mid = (tl+tr)/2;
        build(v+1, tl, mid);
        build(stv, mid+1, tr);
        modZero[v] = (tr-tl)+1;
    }
}
void update(int v,int tl, int tr, int l, int r) {
    if(tl>r || tr<l) return;
    if(tl>=l && tr<=r) {
        prop[v]++;
        swap(modZero[v],modOne[v]);
        swap(modZero[v],modTwo[v]);
    } else {
        int mid = (tl+tr)/2;
        update(v+1,tl,mid,l,r);
        update(stv,mid+1,tr,l,r);
        if(prop[v]%3==0) {
            modZero[v] = modZero[v+1]+modZero[stv];
            modOne[v] = modOne[v+1]+modOne[stv];
            modTwo[v] = modTwo[v+1]+modTwo[stv];
        } else if(prop[v]%3==1) {
            modZero[v] = modTwo[v+1]+modTwo[stv];
            modOne[v] = modZero[v+1]+modZero[stv];
            modTwo[v] = modOne[v+1]+modOne[stv];
        } else {
            modZero[v] = modOne[v+1]+modOne[stv];
            modOne[v] = modTwo[v+1]+modTwo[stv];
            modTwo[v] = modZero[v+1]+modZero[stv];
        }
    }
}
void getMul(int v, int tl, int tr, int l, int r, int carry) {
    if(tl>r || tr<l) return;
    if(tl>=l && tr<=r) {
        if(carry%3==0)
            ans += modZero[v];
        else if(carry%3==1)
            ans += modTwo[v];
        else
            ans += modOne[v];
    } else {
        int mid = (tl+tr)/2;
        getMul(v+1,tl,mid,l,r,carry+prop[v]);
        getMul(stv,mid+1,tr,l,r,carry+prop[v]);
    }
}
void solve() {
    int n,q,qt,i,j;
    sf("%d%d",&n,&q);
    mem(prop,0);
    mem(modZero,0);
    mem(modOne,0);
    mem(modTwo,0);
    build(1,1,n);
    while(q-- > 0) {
        sf("%d%d%d",&qt,&i,&j);
        i++,j++;
        if(qt==0) {
            update(1,1,n,i,j);
        } else {
            ans = 0;
            getMul(1,1,n,i,j,0);
            pf("%d\n",ans);
        }
    }
}
int main() {
    #ifndef ONLINE_JUDGE
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif
    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case %d:\n",i);
        solve();
    }
    #ifndef ONLINE_JUDGE
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        closeConsole;
    #endif
}

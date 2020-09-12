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
#define N 50001

vector<int> arr;
struct data {
    long long int sum=0,pref=0,suff=0,ans=0;
};
data st[2*N];
data combine(data l, data r) {
    data res;
    res.sum = l.sum + r.sum;
    res.pref = max(l.pref,l.sum+r.pref);
    res.suff = max(r.suff,r.sum+l.suff);
    res.ans = max(l.suff+r.pref,max(l.ans, r.ans));
    return res;
}
data make_data(int val) {
    data res;
    res.sum = val;
    res.pref = res.suff = res.ans = max(INT_MIN,val);
    return res;
}
void build(int v, int tl, int tr) {
    if(tl==tr) {
        st[v] = make_data(arr[tl]);
    } else {
        int mid = (tl+tr)/2;
        build(v+1,tl,mid);
        build(stv,mid+1,tr);
        st[v]=combine(st[v+1],st[stv]);
    }
}
data getMax(int v, int tl, int tr, int l, int r) {
    if(tl>r || tr<l) return make_data(INT_MIN);
    if(tl>=l && tr<=r) {
        return st[v];
    } else {
        int mid = (tl+tr)/2;
        return combine(getMax(v+1,tl,mid,l,r),
                       getMax(stv,mid+1,tr,l,r));
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif
    int n,m,x,y;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    build(1,0,n-1);
    cin >> m;
    for(int i=0; i<m; i++) {
        cin >> x >> y;
        cout << getMax(1,1,n,x,y).ans << "\n";
    }
    #ifndef ONLINE_JUDGE
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        closeConsole;
    #endif
}

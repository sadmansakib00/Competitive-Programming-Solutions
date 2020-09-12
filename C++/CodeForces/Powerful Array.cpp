#include<bits/stdc++.h>
using namespace std;
#pragma gcc optimize("O3")
#pragma gcc optimize("unroll-loops")
#ifdef EVAH
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
#define pb push_back
#define PII pair<int,int>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 200001

unsigned LL blockSize,tempAns=0,cnt[1000001];
vector<int> val(N);
vector<unsigned LL> ans(N);

struct query {
    int l,r,idx;
};

bool comp(query lhs, query rhs) {
    if(lhs.l/blockSize != rhs.l/blockSize) return lhs.l<rhs.l;
    return (lhs.l/blockSize&1) ? (lhs.r<rhs.r) : (lhs.r>rhs.r);
}

void add(int i) {
    tempAns -= cnt[val[i]]*cnt[val[i]]*val[i];
    cnt[val[i]]++;
    tempAns += cnt[val[i]]*cnt[val[i]]*val[i];
}

void rmv(int i) {
    tempAns -= cnt[val[i]]*cnt[val[i]]*val[i];
    cnt[val[i]]--;
    tempAns += cnt[val[i]]*cnt[val[i]]*val[i];
}

void mosAlgo(vector<query> qs) {
    sort(qs.begin(),qs.end(),comp);
    int curL=0,curR=-1;
    for(query q : qs) {
        while(curL<q.l) {
            rmv(curL);
            curL++;
        }
        while(curL>q.l) {
            curL--;
            add(curL);
        }
        while(curR>q.r) {
            rmv(curR);
            curR--;
        }
        while(curR<q.r) {
            curR++;
            add(curR);
        }
        ans[q.idx] = tempAns;
    }
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

    int n,t;
    cin >> n >> t;
    blockSize = sqrt(n);
    vector<query> qs(t);
    For(0,n) cin >> val[i];
    For(0,t) {
        cin >> qs[i].l >> qs[i].r;
        qs[i].l--;
        qs[i].r--;
        qs[i].idx = i;
    }
    mosAlgo(qs);
    For(0,t) {
        cout << ans[i] << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

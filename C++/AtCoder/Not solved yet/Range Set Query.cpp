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
#define PI acos(-1.0)
#define N 500001

struct query {
    int l,r,idx;
    bool operator<(query other) const {
        return make_pair(l,r) <
                make_pair(other.l,other.r);
    }
};

map<int,int> aBlock;
vector<int> clr(N);

void rmv(int idx) {
    /*
    auto it = aBlock.find(clr[idx]);
    if(it->ss==1) aBlock.erase(it);
    else it->ss = it->ss-1;
    */
    if(aBlock[clr[idx]]==1) {
        aBlock.erase(clr[idx]);
    } else {
        aBlock[clr[idx]]--;
    }
}
void add(int idx) {
    aBlock[clr[idx]]++;
}
int get_ans() {
    return aBlock.size();
}

vector<int> mosAlgo(vector<query> queries) {
    vector<int> ans(queries.size());
    sort(queries.begin(),queries.end());
    int curL = 0;
    int curR = -1;
    for(query q : queries) {
        while(curL > q.l) {
            curL--;
            add(curL);
        }
        while(curR < q.r) {
            curR++;
            add(curR);
        }
        while(curL < q.l) {
            rmv(curL);
            curL++;
        }
        while(curR > q.r) {
            rmv(curR);
            curR--;
        }
        ans[q.idx] = get_ans();
    }
    return ans;
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

    int n,q,l,r;
    cin >> n >> q;
    vector<query> queries(q);
    For(0,n) {
        cin >> clr[i];
    }
    For(0,q) {
        queries[i].idx = i;
        cin >> queries[i].l >> queries[i].r;
        queries[i].l--;
        queries[i].r--;
    }
    vector<int> ans = mosAlgo(queries);
    For(0,ans.size()) {
        cout << ans[i] << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}

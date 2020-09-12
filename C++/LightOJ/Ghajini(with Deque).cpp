#include<bits/stdc++.h>
//#include<windows.h>
using namespace std;
void solve() {
    int n,d,maxDif = 0;
    deque<int> minn,maxx;
    scanf("%d%d",&n,&d);
    int anArr[n];
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        while(!minn.empty() && minn.back() > anArr[i])
            minn.pop_back();
        minn.push_back(anArr[i]);
        while(!maxx.empty() && maxx.back() < anArr[i])
            maxx.pop_back();
        maxx.push_back(anArr[i]);
        maxDif = max(maxDif,maxx.front()-minn.front());
        if(i+1 >= d) {
            if(!minn.empty() && minn.front()==anArr[i-d+1])
                minn.pop_front();
            if(!maxx.empty() && maxx.front()==anArr[i-d+1])
                maxx.pop_front();
        }
    }
    printf("%d\n",maxDif);
}
int main() {
    //freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++) {
        printf("Case %d: ",i);
        solve();
    }
    //ShellExecute(nullptr,"open","output.txt",nullptr,nullptr,SW_SHOWNORMAL);
}

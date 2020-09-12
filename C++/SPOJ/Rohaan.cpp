#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
void solve() {
    int n,r,s,d,ans=0;
    sf("%d",&n);
    int dis[n+1][n+1];
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            sf("%d",&s);
            dis[i][j]=s;
        }
    }
    for(int k=1; k<=n; k++) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
    }
    sf("%d",&r);
    while(r-- > 0) {
        sf("%d%d",&s,&d);
        ans += dis[s][d];
    }
    pf("%d\n",ans);
}
int main() {
    int t;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        pf("Case #%d: ",i);
        solve();
    }
}

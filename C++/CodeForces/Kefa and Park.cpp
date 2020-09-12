#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool flag[100002];
bool cats[100002];
vector<vector<int>> aV;
int m,ans=0;

void dfs(int v,int total,bool catBehind,int maxConsCat) {
    if(aV[v].size()==1 && maxConsCat <= m && v != 1) {
        //cout << "Leaf = " << v << "\n";
        ans++;
    }
    flag[v]=true;
    for(auto i : aV[v]) {
        if(!flag[i]) {
            if(catBehind) {
                if(cats[i]) {
                    if(total+1>maxConsCat) {
                        dfs(i,total+1,true,total+1);
                    } else {
                        dfs(i,total+1,true,maxConsCat);
                    }
                } else {
                    dfs(i,0,false,maxConsCat);
                }
            } else {
                if(cats[i])
                    dfs(i,1,true,maxConsCat);
                else
                    dfs(i,0,false,maxConsCat);
            }
        }
    }
   //cout << v << "  ==  " << maxConsCat << "\n";
}

int main() {
    horsePower;
    int n,x,y;
    cin >> n >> m;
    for(int i=1; i<=n; i++) {
        cin >> x;
        if(x==1) {
            cats[i] = true;
        }
    }
    aV.resize(n+1);
    for(int i=1; i<n; i++) {
        cin >> x >> y;
       // if(x>y)
       //     swap(x,y);
        aV[x].push_back(y);
        aV[y].push_back(x);
    }
    if(cats[1])
        dfs(1,1,true,1);
    else
        dfs(1,0,false,0);
    cout << ans << "\n";
}

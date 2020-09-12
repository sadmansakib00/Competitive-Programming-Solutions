#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int *arr, stMax[2*100001],stMin[2*100001];
void build(int v, int tl, int tr, bool toggle) {
    if(tl==tr) {
        if(toggle) stMin[v]=arr[tl];
        else stMax[v]=arr[tl];
    } else {
        int tm = (tl+tr)/2;
        build(v+1,tl,tm,toggle);
        build(v+2*(tm-tl+1),tm+1,tr,toggle);
        if(toggle) stMin[v] = min(stMin[v+1],stMin[v+2*(tm-tl+1)]);
        else stMax[v] = max(stMax[v+1],stMax[v+2*(tm-tl+1)]);
    }
}
int get(int v, int tl, int tr, int l, int r, bool toggle) {
    if(tl>r || tr<l) {
        if(toggle) return INT_MAX;
        else return INT_MIN;
    }
    if(tl>=l && tr<=r) {
        if(toggle) return stMin[v];
        else return stMax[v];
    }
    int tm = (tl+tr)/2;
    if(toggle) return min(get(v+1,tl,tm,l,r,toggle),
                          get(v+2*(tm-tl+1),tm+1,tr,l,r,toggle));
    else return max(get(v+1,tl,tm,l,r,toggle),
                    get(v+2*(tm-tl+1),tm+1,tr,l,r,toggle));
}
int main() {
    int t,n,d,maxDif;
    sf("%d",&t);
    for(int i=1; i<=t; i++) {
        maxDif = 0;
        memset(stMax,0,sizeof(stMax));
        memset(stMin,0,sizeof(stMin));
        pf("Case %d: ",i);
        sf("%d%d",&n,&d);
        arr = new int[n];
        for(int j=0; j<n; j++)  sf("%d",&arr[j]);
        build(1,0,n-1,true);
        build(1,0,n-1,false);
        for(int j=d-1; j<n; j++) {
            maxDif = max(maxDif,get(1,1,n,j-d+1,j,false)-get(1,1,n,j-d+1,j,true));
        }
        pf("%d\n",maxDif);
        delete[] arr;
    }
}

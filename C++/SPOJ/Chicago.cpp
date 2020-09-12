#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(6);
    int n,m,x,y,v;
    cin >> n;
    while(n != 0) {
        cin >> m;
        double adj[n][n];
        //memset(adj,-1,sizeof(adj)); //It doestn't work? :|
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                adj[i][j]=-1;
            }
        }
        for(int i=0; i<m; i++) {
            cin >> x >> y >> v;
            adj[x-1][y-1]=v/100.0;
            adj[y-1][x-1]=v/100.0;
        }
        adj[0][0]=1;
        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(adj[i][k]!=-1 && adj[k][j]!=-1)
                        adj[i][j] = max(adj[i][j],adj[i][k]*adj[k][j]);
                }
            }
        }
        adj[0][n-1] *= 100;
        cout << adj[0][n-1] << " percent\n";
        cin >> n;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,llX,llY,urX,urY,m,cX,cY;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cout << "Case " << i << ":\n";
        cin  >> llX >> llY >> urX >> urY >> m;
        for(int j=1; j<=m; j++) {
             cin >> cX >> cY;
             if((cX>llX && cX<urX) && (cY>llY && cY<urY)) {
                cout << "Yes\n";
             } else {
                cout << "No\n";
             }
        }
    }
}

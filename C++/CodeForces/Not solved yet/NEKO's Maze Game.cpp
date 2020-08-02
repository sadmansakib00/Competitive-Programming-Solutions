#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool path[3][100002];
int main() {
    horsePower;
    int n,q,r,c;
    bool ans;
    cin >> n >> q;
    for(int i=0; i<q; i++) {
        ans = true;
        cin >> r >> c;
        if(path[r][c]) {
            path[r][c] = false;
        } else {
            path[r][c] = true;
        }
        for(int j=1; j<n; j++) {
            if(path[1][j] && path[2][j]) {
                ans = false;
                break;
            }
            if(path[1][j] && path[2][j+1]) {
                ans = false;
                break;
            }
            if(path[2][j] && path[1][j+1]) {
                ans = false;
                break;
            }
        }
        if(ans) {
            if(path[1][n] && path[2][n-1]) {
                ans = false;
            }
        }
        if(ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

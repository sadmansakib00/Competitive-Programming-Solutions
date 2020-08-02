#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,m;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i==0 && j==0) {
                    cout << "W";
                } else {
                    cout << "B";
                }
            }
            cout << "\n";
        }
    }
}

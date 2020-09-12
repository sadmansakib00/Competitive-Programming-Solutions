#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,k;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        for(int i=1,j=1; i<=k; i+=j,j++) {
            if(k>=i && k<i+j) {
                for(int x=1; x<=n; x++) {
                    if(x==(n-j) || x==(n-(k-i))) {
                        cout << "b";
                    } else {
                        cout << "a";
                    }
                }
                cout << "\n";
                break;
            }
        }
    }
}

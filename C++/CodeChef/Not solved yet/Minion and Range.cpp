#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,q,l,r,temp;
    cin >> t;
    while(t-- >0) {
        cin >> n;
        vector<int> elem(100002);
        for(int i=1; i<=n; i++) {
            cin >> elem[i];
        }
        cin >> q;
        while(q-- >0) {
            cin >> l >> r;
            temp = elem[l];
            for(int i=l+1; i<=r; i++) {
                temp = temp & elem[i];
            }
            if(temp & 1) {
                cout << "ODD\n";
            } else {
                cout << "EVEN\n";
            }
        }
    }
}

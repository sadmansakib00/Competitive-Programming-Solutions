#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,x,y,sum;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x >> y;
        sum = x+y-n;
        if(sum<=0) {
            cout << "1 ";
        } else {
            if(sum>=n) cout << sum << " ";
            else cout << sum+1 << " ";
        }
        sum = x+y-1;
        if(sum>=n) {
            cout << n << "\n";
        } else {
            cout << sum << "\n";
        }
    }
}

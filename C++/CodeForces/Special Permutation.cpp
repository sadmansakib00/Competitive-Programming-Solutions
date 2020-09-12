#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n<4) {
            cout << "-1\n";
        } else {
            for(int i=(n/2)*2; i>4; i-=2) cout << i << " ";
            cout << "2 4 1 3";
            for(int i=5; i<=n; i+=2) cout << " " << i;
            cout << "\n";
        }
    }
}

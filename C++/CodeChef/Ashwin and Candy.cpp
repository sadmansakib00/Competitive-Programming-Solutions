#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long t,n,total;
    cin >> t;
    while(t-- > 0) {
        total = 0;
        cin >> n;
        if(n%2==0) {
            if(n%4==0)
                cout << n/4-1 << "\n";
            else
                cout << n/4 << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}

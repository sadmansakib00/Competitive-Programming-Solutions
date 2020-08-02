#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n==1) {
            cout << "-1\n";
        } else {
            cout << "5";
            for(int i=1; i<n; i++) {
                cout << 9;
            }
            cout << "\n";
        }
    }
}

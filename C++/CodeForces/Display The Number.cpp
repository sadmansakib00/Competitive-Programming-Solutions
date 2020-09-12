#include <bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n%2!=0) {
            cout << "7";
        } else {
            cout << "1";
        }
        for(int i=1; i<n/2; i++) {
            cout << "1";
        }
        cout << "\n";
    }
}

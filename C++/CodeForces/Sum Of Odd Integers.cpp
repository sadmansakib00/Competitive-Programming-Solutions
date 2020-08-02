#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        if(n%2==0 && k%2==0 && k<=sqrt(n)) {
            cout << "YES\n";
        } else if(n%2!=0 && k%2!=0 && k<=sqrt(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

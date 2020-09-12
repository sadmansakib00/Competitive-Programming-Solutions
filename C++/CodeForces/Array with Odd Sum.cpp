#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,temp;
    cin >> t;
    bool even,odd;
    while(t-- > 0) {
        cin >> n;
        even=false, odd=false;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp%2==0) {
                even = true;
            } else {
                odd = true;
            }
        }
        if(odd && even) {
            cout << "YES\n";
        } else if(odd && n%2!=0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

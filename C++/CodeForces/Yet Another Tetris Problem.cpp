#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,temp;
    bool odd, even;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        odd=false, even=false;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp%2==0) {
                even = true;
            } else {
                odd = true;
            }
        }
        if(odd && even) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

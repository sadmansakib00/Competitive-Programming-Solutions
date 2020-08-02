#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t,n,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        total = 0;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0; i<n; i++) {
            total += min(a[i],b[i]);
        }
        cout << total << "\n";
    }
}

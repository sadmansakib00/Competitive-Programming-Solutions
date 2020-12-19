#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,a[3];
    cin >> t;
    while(t-- > 0) {
        cin >> a[0] >> a[1] >> a[2];
        a[0] = abs(a[0]+a[1]-1-a[2]);
        if(!a[0]) a[0]++;
        cout << a[0] << "\n";
    }
}

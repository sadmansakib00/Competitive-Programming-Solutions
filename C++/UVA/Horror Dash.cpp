#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests,maxSpeed,n,temp;
    cin >> tests;
    for(int m=1; m<=tests; m++) {
        maxSpeed = 0;
        cin >> n;
        while(n-- > 0) {
            cin >> temp;
            maxSpeed = maxSpeed<temp ? temp : maxSpeed;
        }
        cout << "Case "<<m<<": "<<maxSpeed<<"\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int test, x, y, z, sumX=0, sumY=0, sumZ=0;
    cin >> test;
    while(test-- > 0) {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX==0 && sumY==0 && sumZ==0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

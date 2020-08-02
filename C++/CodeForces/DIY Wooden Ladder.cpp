#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests, n;
    cin >> tests;
    while(tests-- > 0) {
        cin >> n;
        int anArr[n];
        for(int m=0; m<n; m++)
            cin >> anArr[m];
        if(n==2)
            cout << "0\n";
        else {
            sort(anArr,anArr+n);
            if(anArr[n-2]==1)
                cout << "0\n";
            else {
                if(anArr[n-2]<=n-2) {
                    cout << anArr[n-2]-1 << "\n";
                } else {
                    cout << n-2 << "\n";
                }
            }
        }
    }
}

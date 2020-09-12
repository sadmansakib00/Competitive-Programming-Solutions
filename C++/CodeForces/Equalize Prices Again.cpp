#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int q,n;
    cin >> q;
    while(q-- > 0) {
        cin >> n;
        int sum = 0,temp;
        for(int m=0; m<n; m++) {
            cin >> temp;
            sum += temp;
        }
        cout << ceil(sum/(double)n) << "\n";
    }
}

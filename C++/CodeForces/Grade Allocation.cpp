#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,m,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        total = 0;
        int grades[n];
        for(int i=0; i<n; i++) {
            cin >> grades[i];
            if(i != 0) {
                total += grades[i];
            }
        }
        if(grades[0]+total >= m) {
            cout << m << "\n";
        } else {
            cout << grades[0]+total << "\n";
        }
    }
}

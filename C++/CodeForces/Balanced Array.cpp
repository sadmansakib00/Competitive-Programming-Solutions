#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if((n/2)%2==0) {
            cout << "YES\n";
            int evenSum = 0, oddSum =0;
            for(int i=0,j=2; i<n/2; i++,j+=2) {
                evenSum += j;
                cout << j << " ";
            }
            for(int i=0,j=1; i<n/2-1; i++,j+=2) {
                cout << j << " ";
                oddSum += j;
            }
            cout << evenSum - oddSum << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

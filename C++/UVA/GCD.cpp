#include <bits/stdc++.h>
using namespace std;
long long int GCD(int i, int j) {
    return j==0 ? i : GCD(j,i%j);
}
int main() {
    ios_base::sync_with_stdio(false);
    int n,totalGCD;
    cin >> n;
    while(n!=0) {
        totalGCD = 0;
        for(int i=1; i<n; i++) {
            for(int j=i+1; j<=n; j++) {
                totalGCD += GCD(i,j);
            }
        }
        cout << totalGCD << "\n";
        cin >> n;
    }
}

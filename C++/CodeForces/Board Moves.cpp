#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,halfN,sum;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        if(n==1) {
            cout << "0\n";
            continue;
        }
        halfN = n/2+1;
        sum = 0;
        for(int i=1; i<halfN; i++) {
            sum += (halfN-i)*(4*n-4);
            n -= 2;
        }
        cout << sum << "\n";
    }
}

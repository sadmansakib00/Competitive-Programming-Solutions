#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        for(int i=2,j=1; ; i*=2) {
            j+=i;
            if(n%j==0) {
                cout << n/j << "\n";
                break;
            }
        }
    }
}

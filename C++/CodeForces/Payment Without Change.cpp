#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long long int t,a,b,n,s;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> n >> s;
        if(a*n<=s) {
            s -= a*n;
        } else {
            s -= (s/n)*n;
        }
        s -= b;
        if(s<=0)    cout << "YES\n";
        else    cout << "NO\n";
    }
}

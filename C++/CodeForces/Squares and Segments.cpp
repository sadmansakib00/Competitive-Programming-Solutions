#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(0);
    ll n,l=0,r=1;
    cin >> n;
    int i=0,j=1;
    for(; ; i++,j++) {
        l = llround(pow(i,2));
        r = llround(pow(j,2));
        if(n>=l && n<=r) {
            break;
        }
    }
    if(n<=(r+l)/2) {
        cout << 2*j-1 << "\n";
    } else {
        cout << 2*j << "\n";
    }
}

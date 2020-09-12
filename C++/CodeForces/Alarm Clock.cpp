#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main() {
    ios_base::sync_with_stdio(false);
    LL t,a,b,c,d;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> c >> d;
        if(a>b && d>=c) cout << "-1\n";
        else if(b>=a) cout << b << "\n";
        else cout << b+((a-b)%(c-d)==0 ? (a-b)/(c-d) : (a-b)/(c-d)+1)*c << "\n";
    }
}

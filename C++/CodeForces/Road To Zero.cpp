#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,y,a,b,tempY,tempX,total;
    cin >> t;
    while(t-- > 0) {
        cin >> x >> y >> a >> b;
        tempY = y;
        tempX = x;
        total = 0;
        if(x>y) swap(x,y);
        if(x!=0) {
            total += x*b;
            y -= x;
        }
        total += y*a;
        total = min(total,(tempX+tempY)*a);
        cout << total << "\n";
    }
}

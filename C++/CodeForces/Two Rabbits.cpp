#include <bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,x,y,a,b;
    double time;
    cin >> t;
    while(t-- > 0) {
        cin >> x >> y >> a >> b;
        if((x-y)%(a+b)==0) {
            cout << (y-x)/(a+b) << "\n";
        } else {
            cout << "-1\n";
        }
    }
}

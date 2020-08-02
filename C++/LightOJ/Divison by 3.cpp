#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t, a, b, tempA, tempB, sum;
    cin >> t;
    for(int i=1; i<=t; i++) {
        sum = 0;
        cin >> a >> b;
        if(a%3==0) {
            a += 1;
            sum += 1;
        } else if(a%3==2) {
            a += 2;
            sum += 2;
        }
        if(b%3==0) {
            b += 1;
        } else if(b%3==2) {
            b += 2;
            sum -= 1;
        }
        sum += (abs(a-b)*2)/3;
        cout << "Case " << i << ": " << sum << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t,x,temp;
    double n,d;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> d;
        if(n>=d) {
            cout << "YES\n";
        } else {
            x = INT_MAX;
            for(int i=1; i<=2*n/3; i++) {
                temp = i;
                temp = temp + ceil(d/(temp+1));
                if(temp<=n) {
                    x = temp;
                    break;
                }
            }
            if(x<=n) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
}

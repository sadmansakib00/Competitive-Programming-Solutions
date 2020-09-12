#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,a,b;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        if(a<b) {
            cout << b-a << "\n";
        } else if(a%b==0) {
            cout << "0\n";
        } else {
            cout << ((a/b)+1)*b-a << "\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,x,a,b,weHave;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x >> a >> b;
        weHave = max(a,b)-min(a,b)+x;
        if(weHave>n-1) {
            weHave = n-1;
        }
        cout << weHave << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t,a,b;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        if(a<b) swap(a,b);
        cout << max(a*a,4*b*b) << "\n";
    }
}

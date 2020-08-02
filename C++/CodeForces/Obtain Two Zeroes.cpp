#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,a,b;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        if(a>b) swap(a,b);
        if((a+b)%3==0 && a*2>=b)     cout << "YES\n";
        else    cout << "NO\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,b,c,d;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> a >> b >> c >> d;
        flag = false;
        for(int i=c-d; i<=c+d; i++) {
            if(i/(double)n>=(double)a-b && i/(double)n<=(double)a+b) {
                flag = true;
                cout << "YES\n";
                break;
            }
        }
        if(!flag) cout << "NO\n";
    }
}

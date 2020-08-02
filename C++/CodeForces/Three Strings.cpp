#include<bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

int main() {
    horsePower;
    int t;
    bool flag;
    string a,b,c;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> c;
        flag = true;
        for(int i=0; i<a.length(); i++) {
            if(a[i]==c[i] || b[i] == c[i]) {
                continue;
            } else if((a[i] == b[i]) && a[i] != c[i]) {
                flag = false;
                break;
            } else {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

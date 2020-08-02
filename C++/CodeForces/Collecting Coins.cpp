#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
int main() {
	horsePower;
	ll t,n,temp;
	ll abc[3];
	bool flag = false;
	cin >> t;
	while(t-- > 0) {
        flag = false;
        cin >> abc[0] >> abc[1] >> abc[2] >> n;
        sort(abc,abc+3);
        temp = n-(2*abc[2]-abc[0]-abc[1]);
        if(2*abc[2]-abc[0]-abc[1] <=n) {
            if(temp%3==0) {
                flag = true;
            }
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
	}
}

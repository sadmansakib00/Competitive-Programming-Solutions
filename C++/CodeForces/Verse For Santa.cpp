#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,n,s,sum,maxx,maxPos;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        //cout << "I'm here!\n";
        cin >> n >> s;
        //cout << "n == " << n << "  s == " << s << "\n";
        flag = false;
        int sec[n+1];
        maxPos = 1;
        cin >> sec[1];
        maxx = sec[1];
        sum = sec[1];
        for(int i=2; i<=n; i++) {
            cin >> sec[i];
            if(sec[i]>maxx && !flag) {
                maxx = sec[i];
                maxPos = i;
            }
            sum += sec[i];
            if(sum>s) {
                flag = true;
                //break;
            }
        }
        if(flag) {
            cout << maxPos << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
}

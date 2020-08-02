#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long int
ll gcd(ull a, ull b) {
    return b==0 ? a : gcd(b,a%b);
}
ll lcm(ull a, ull b) {
    return (a*b)/gcd(a,b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ull t,a,b,q,l,r,lcmOfab,same,firstDiv,lastDiv;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> q;
        if(a>b) swap(a,b);
        while(q-- > 0) {
            cin >> l >> r;
            same = 0;
            if(r<b) {
                cout << "0";
            } else {
                lcmOfab = lcm(a,b);
                firstDiv = l - l%lcmOfab;
                lastDiv = r - r%lcmOfab;
                if((lastDiv-firstDiv)/lcmOfab>1) {
                    same = ((lastDiv-firstDiv)/lcmOfab-1)*b;
                }
                if(firstDiv+b-1>=l) {
                    if(firstDiv+b-1<=r) {
                        same+=firstDiv+b-l;
                    } else {
                        same += (r-l)+1;
                    }
                }
                if(firstDiv != lastDiv) {
                    if(lastDiv+b-1<=r) {
                        same+=b;
                    } else {
                        same+=r-lastDiv+1;
                    }
                }
                cout << r-l-same+1;
            }
            if(q != 0) cout << " ";
        }
        cout << "\n";
    }
}

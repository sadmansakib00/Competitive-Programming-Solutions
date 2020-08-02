#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        total = 0;
        if(n>250000) {
            if(n>500000) {
                total = ((500000-250000)/100)*5;
            } else {
                total = ((n-250000)/100)*5;
            }
        }
        if(n>500000) {
            if(n>750000) {
                total += ((750000-500000)/100)*10;
            } else {
                total += ((n-500000)/100)*10;
            }
        }
        if(n>750000) {
            if(n>1000000) {
                total += ((1000000-750000)/100)*15;
            } else {
                total += ((n-750000)/100)*15;
            }
        }
        if(n>1000000) {
            if(n>1250000) {
                total += ((1250000-1000000)/100)*20;
            } else {
                total += ((n-1000000)/100)*20;
            }
        }
        if(n>1250000) {
            if(n>1500000) {
                total += ((1500000-1250000)/100)*25;
            } else {
                total += ((n-1250000)/100)*25;
            }
        }
        if(n>1500000) {
            total += ((n-1500000)/100)*30;
        }
        cout << n - total << "\n";
    }
}

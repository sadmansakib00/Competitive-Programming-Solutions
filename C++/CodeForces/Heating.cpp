#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
int main() {
    horsePower;
    int n,c,sum;
    cin >> n;
    while(n-- >0) {
        cin >> c >> sum;
        ll temp = sum/c;
        ll anArr[c];
        for(int m=0; m<c; m++) {
            anArr[m] = temp;
        }
        temp = sum%c;
        for(int m=0; m<temp; m++) {
            anArr[m]++;
        }
        ll total=0;
        for(int m=0; m<c; m++) {
            total += pow(anArr[m],2);
        }
        cout << total << "\n";
    }
}

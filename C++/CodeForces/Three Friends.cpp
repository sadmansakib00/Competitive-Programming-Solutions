#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    ll t,sum;
    ll anArr[3];
    cin >> t;
    while(t-- > 0) {
        cin >> anArr[0] >> anArr[1] >> anArr[2];
        sort(anArr,anArr+3);
        if(anArr[0]<anArr[1]) {
            anArr[0]++;
        } else if((anArr[0] == anArr[1]) && anArr[0] < anArr[2]) {
            anArr[0]++;
            anArr[1]++;
        }
        if(anArr[2]>anArr[1]) {
            anArr[2]--;
        } else if((anArr[1] == anArr[2]) && anArr[1] > anArr[0]) {
            anArr[1]--;
            anArr[2]--;
        }
        sum = abs(anArr[0]-anArr[1])+abs(anArr[0]-anArr[2]) + abs(anArr[1]-anArr[2]);
        cout << sum << "\n";
    }
}

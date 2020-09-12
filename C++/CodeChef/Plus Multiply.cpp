#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,n,total,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        total = 0;
        int anArr[3];
        anArr[0] = 0;
        anArr[2] = 0;
        for(int i=0; i<n; i++) {
            cin >> temp;
            if(temp == 2) {
                anArr[2]++;
            } else if(temp == 0) {
                anArr[0]++;
            }
        }
        total = (anArr[0]*(anArr[0]+1))/2 + (anArr[2]*(anArr[2]+1))/2 - anArr[0] - anArr[2];
        cout << total << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
bitset<100000001> pFlag;
int pCount = 1;
void sieve(int n) {
    pFlag[1] = 1;
    for(int i=4; i<=n; i+=2) {
        pFlag[i] = 1;
    }
    for(int i=3; i<=n; i+=2) {
        if(!pFlag[i]) {
            pCount++;
            if((long long int)i*i<=n) {
                for(int j=i*i; j<=n; j+=i) {
                    pFlag[j] = 1;
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n,q,temp;
    cin >> n >> q;
    sieve(n);
    cout << pCount << "\n";
    while(q-- > 0) {
        cin >> temp;
        cout << !pFlag[temp] << "\n";
    }
}

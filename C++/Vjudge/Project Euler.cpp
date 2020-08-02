#include <bits/stdc++.h>
using namespace std;
const int num = 150000;
bool mark[num];
vector<int> primes;

void sieve() {
    primes.push_back(2);
    for(int m=3; m*m<num; m+=2) {
        if(!mark[m]) {
            for(int n=m*m; n<num; n+=m*2)
                mark[n] = true;
        }
    }
    for(int m=3; m<num; m+=2) {
        if(!mark[m])
            primes.push_back(m);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cout << primes[n-1] << "\n";
    }
}

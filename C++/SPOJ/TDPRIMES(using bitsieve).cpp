#include<bits/stdc++.h>
using namespace std;
#define N 100000001
bitset<N> pFlag;
vector<int> primes;
void sieve() {
    for(int i=4; i<=N; i+=2) {
        pFlag[i] = 1;
    }
    for(int i=3; i*i<=N; i+=2) {
        if(!pFlag[i]) {
            for(int j=i*i; j<=N; j+=i) {
                pFlag[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<N; i+=2) {
        if(!pFlag[i])    primes.push_back(i);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    for(int i=0; i<primes.size(); i+=100) {
        cout << primes[i] << "\n";
    }
}

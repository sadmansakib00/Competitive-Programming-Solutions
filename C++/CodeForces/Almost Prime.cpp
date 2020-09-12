#include<bits/stdc++.h>
using namespace std;
#define N 3001
bitset<N> bs;
vector<int> primes;
void sieve() {
    for(int i=4; i<=N; i+=2) {
        bs[i] = 1;
    }
    for(int i=3; i*i<=N; i+=2) {
        if(!bs[i]) {
            for(int j=i*i; j<=N; j+=i) {
                bs[j] = 1;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<=N; i+=2) {
        if(!bs[i]) primes.push_back(i);
    }
}
int pFactors(int n) {
    int fc=0;
    if(!bs[n]) return fc;
    for(int i=0; i<primes.size(); i++) {
        if(n==1 || primes[i]>n) break;
        if(!bs[n]) {
            fc++;
            break;
        }
        if(n%primes[i]==0) fc++;
        while(n%primes[i]==0) {
            n /= primes[i];
        }
    }
    return fc;
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    int n,ap=0;
    cin >> n;
    for(int i=6; i<=n; i++) if(pFactors(i)==2)  ap++;
    cout << ap << "\n";
}

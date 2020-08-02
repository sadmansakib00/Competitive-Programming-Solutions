#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pRange 1001
bool sieveFlag[pRange];
vector<int> primes;
void sieve() {
    int root = sqrt(pRange);
    primes.push_back(2);
    for(int i=2; i<pRange; i+=2) sieveFlag[i]=true;
    for(int i=3; i<=root; i+=2) {
        if(!sieveFlag[i]) {
            for(int j=i*i; j<pRange; j+=2*i) sieveFlag[j]=true;
        }
    }
    for(int i=3; i<pRange; i+=2) {
        if(!sieveFlag[i]) primes.push_back(i);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    ll t,n,k;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        flag = false;
        for(int i=0; i<primes.size(); i++) {
            if(n%primes[i]==0) {
                n+=primes[i];
                flag = true;
                break;
            } else if(n<primes[i]) {
                break;
            }
        }
        if(!flag) n += n;
        n += (k-1)*2;
        cout << n << "\n";
    }
}

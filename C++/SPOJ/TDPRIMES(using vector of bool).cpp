#include<bits/stdc++.h>
using namespace std;
#define N 100000001
vector<bool> pFlag(N,false);
void sieve() {
    for(int i=4; i<N; i+=2) {
        pFlag[i] = 1;
    }
    cout << "2\n";
    int pCount = 0;
    for(int i=3; i<=N; i+=2) {
        if(!pFlag[i]) {
            pCount++;
            if(pCount==100) {
                cout << i << "\n";
                pCount = 0;
            }
            if((long long int)i*i<=N) {
                for(int j=i*i; j<=N; j+=i) {
                    pFlag[j] = 1;
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    sieve();
}

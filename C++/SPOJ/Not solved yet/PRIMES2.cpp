#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
double stopwatch() {
    static auto start_time = chrono::steady_clock::now();
    auto end_time = chrono::steady_clock::now();
    double total = chrono::duration_cast<chrono::nanoseconds>(end_time-start_time).count();
    return total*1e-9;
}
#define N 100000001
bool pFlag[N];
//bitset<N> pFlag;
void sieve() {
    for(int i=4; i<N; i+=2) {
        pFlag[i] = 1;
    }
    cout << 2 << "\n";
    int pCount = 0;
    for(int i=3; i<N; i+=2) {
        if(!pFlag[i]) {
            pCount++;
            if(pCount == 100) {
                cout << i << "\n";
                pCount = 0;
            }
            if((long long int)i*i<N) {
                for(int j=i*i; j<N; j+=i) {
                    pFlag[j] = 1;
                }
            }
        }
    }
}
int main() {
    cout << fixed << setprecision(9);
    cout << stopwatch() << "s\n";
    ios_base::sync_with_stdio(false);
    sieve();
    cout << stopwatch() << "s\n";
}

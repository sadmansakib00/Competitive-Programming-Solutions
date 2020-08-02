#include <bits/stdc++.h>
using namespace std;
const int range = 1000000;
bool flag[range];
vector<int> primes;
void seive() {
    primes.push_back(2);
    int m,n;
    for(m=3; m*m<range; m+=2) {
        if(!flag[m]) {
            for(n=m*m; n<range; n+=m*2)
                flag[n]=true;
        }
    }
    for(m=3; m<range; m+=2) {
        if(!flag[m])
            primes.push_back(m);
    }
}
int factors(int n) {
    int sum = 0,m;
    bool mark = false;
    for(int m=0; primes[m]<=n && m<primes.size(); m++) {
        mark = false;
        while(n%primes[m]==0) {
            n/=primes[m];
            mark = true;
        }
        if(mark)
            ++sum;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    seive();
    int tests; cin >> tests;
    while(tests!=0) {
        cout << tests << " : " << factors(tests) << "\n";
        cin >> tests;
    }
}

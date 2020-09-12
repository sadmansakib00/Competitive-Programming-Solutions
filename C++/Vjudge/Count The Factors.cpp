#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define sieveRange 1000001

vector<int> sv;
bool flag[sieveRange];

void sieve() {
    sv.push_back(2);
    int root = sqrt(sieveRange);
    for(int m=4; m<sieveRange; m+=2) {
        flag[m] = true;
    }
    for(int m=3; m<root; m+=2) {
        if(!flag[m]) {
            for(int n=m*m; n<sieveRange; n+= 2*m) {
                flag[n] = true;
            }
        }
    }
    for(int m=3; m<sieveRange; m++) {
        if(!flag[m]) {
            sv.push_back(m);
        }
    }
}

int factors(int n) {
    int sum = 0;
    bool mark;
    for(int m=0; sv[m]<=n && m<sv.size(); m++) {
        mark = false;
        while(n%sv[m]==0) {
            mark = true;
            n /= sv[m];
        }
        if(mark) {
            sum++;
        }
    }
    return sum;
}

int main() {
    horsePower;
    sieve();
    int t;
    cin >> t;
    while(t != 0) {
        cout << t << " : " << factors(t) << "\n";
        cin >> t;
    }
}

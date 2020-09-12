#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define range 1000001
bool seiveF[range];
bool digPrime[range];
int consDigPrime[range];

void seive() {
    int rootVal = sqrt(range)+1;
    seiveF[0] = true;
    seiveF[1] = true;
    for(int m=4; m<range; m+=2) {
        seiveF[m] = true;
    }
    for(int m=3; m<rootVal; m+=2) {
        if(!seiveF[m]) {
            for(int n=m*m; n<range; n += 2*m) {
                seiveF[n] = true;
            }
        }
    }
}
int sumOfDig(int m) {
    stringstream ss;
    ss << m;
    string s;
    ss >> s;
    //s = to_string(m);
    int sum = 0;
    for(int m=0; m<s.length(); m++) {
        sum += s[m]-'0';
    }
    return sum;
}
void makeSum() {
    for(int m=0; m<range; m++) {
        if(!seiveF[m]) {
            if(!seiveF[sumOfDig(m)]) {
                digPrime[m] = true;
            }
        }
    }
}
void consecutiveSum() {
    consDigPrime[0] = 0;
    consDigPrime[1] = 0;
    for(int m=2; m<range; m++) {
        if(digPrime[m]) {
            consDigPrime[m] = consDigPrime[m-1] + 1;
        } else {
            consDigPrime[m] = consDigPrime[m-1];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    seive();
    makeSum();
    consecutiveSum();
    int n,t1,t2,total;
    cin >> n;
    while(n-- > 0) {
        cin >> t1 >> t2;
        total = consDigPrime[t2]-consDigPrime[t1-1];
        cout << total << "\n";
    }
}

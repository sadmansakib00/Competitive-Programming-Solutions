#include <bits/stdc++.h>
using namespace std;
const int range = 31624;
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
int divisor(int n) {
    int sum = 1,m;
    for(int m=0; primes[m]<=n && m<primes.size(); m++) {
        int div = 1;
        while(n%primes[m]==0) {
            n/=primes[m];
            ++div;
        }
        sum *= div;
    }
    if(n!=1)
        sum*=2;
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    seive();
    int tests,low,up,num,temp,div;
    cin >> tests;
    while(tests-- > 0) {
        cin >> low >> up;
        num = div = 0;
        for(int m=low; m<=up; m++) {
            temp = divisor(m);
            if(temp>div) {
                num = m; div = temp;
            }
        }
        cout <<"Between "<<low<<" and "<<up<<", "
            <<num<<" has a maximum of "<<div<<" divisors.\n";
    }
}

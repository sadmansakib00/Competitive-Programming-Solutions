#include <bits/stdc++.h>
using namespace std;
int primes[78498];
bool flag[1000000];
void seive() {
    for(int m=0; m<1000001; m++)
        flag[m]=1;
    int limit = sqrt(1000001)+1;
    for(int m=2; m<limit; m++) {
        if(flag[m]) {
            for(int n=m; n*m<1000001; n++) {
                flag[m*n]=false;
            }
        }
    }
    for(int m=2,n=0; m<1000001; m++)  {
        if(flag[m]) {
            primes[n] = m;
            n++;
        }
    }
}
int main() {
    seive();
    ios_base::sync_with_stdio(false);
    int anInt;
    cin >> anInt;
    while(anInt != 0) {
        bool flagTwo = false;
        for(int m=1; m<9592; m++) {
            if(flag[anInt-primes[m]]) {
                cout << anInt << " = "<<primes[m]<<" + "<<anInt-primes[m]<<"\n";
                flagTwo = true;
                break;
            }
        }
        if(!flagTwo)
            cout << "Goldbach's conjecture is wrong.\n";
        cin >> anInt;
    }
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define sizeOfFlag 1000000
#define sizeOfPrimes 32000

bool flag[sizeOfFlag+1];
int primes[sizeOfPrimes+1];

int sieve() {
    memset(flag, true, sizeOfFlag);
    int rootVal = sqrt(sizeOfFlag)+1;
    for(int m=2; m<rootVal; m++) {
        if(flag[m]) {
            for(int n=m; m*n<=sizeOfFlag; n++)
                flag[m*n]=false;
        }
    }
    int total=0;
    for(int m=2; m<=sizeOfFlag; m++) {
        if(flag[m]) {
            primes[total++]=m;
        }
    }
    return total;
}
int main() {
    int total=sieve();
    int tests,lower(0),upper(0),lowPos(0),upPos(0);
    cin >> tests;
    while(tests-- > 0) {
        lowPos=upPos=0;
        cin>>lower>>upper;
        for(int m=0;true;m++) {
            if(primes[m]>=lower) {
                lowPos=m;
                break;
            }
        }
        for(int m=total-1;m>=0;m--){
            if(primes[m]<=upper) {
                upPos=m;
                break;
            }
        }
        if(upPos-lowPos<1) {
            cout<<"No jumping champion"<<endl;
            continue;
        }
        if(upPos-lowPos<2) {
        	cout<<"The jumping champion is "<<primes[upPos]-primes[lowPos]<<endl;
        	continue;
        }
        int dif[upPos-lowPos];
        for(int m=lowPos,n=0; m<upPos; m++,n++) {
            dif[n]=primes[m+1]-primes[m];
        }
        sort(dif,dif+(upPos-lowPos));
        int jumps[dif[upPos-lowPos-1]+1];
        int len = dif[upPos-lowPos-1]+1;

        for(int m=0; m<len; m++)
            jumps[m]=0;

        for(int m=0; m<upPos-lowPos; m++) {
            jumps[dif[m]]++;
        }
        int maxPos = 0;
        int maximum = 0;
        for(int m=0; m<len; m++) {
            if(jumps[m]>maximum) {
                maximum=jumps[m];
                maxPos=m;
            }
        }
        bool marker = true;
        for(int m=0; m<len; m++) {
        	if(m != maxPos) {
        		if(jumps[m]==maximum)
        			marker = false;
        	}
        }
        if(maximum>1 && marker)
            cout<<"The jumping champion is "<<maxPos<<endl;
        else
            cout<<"No jumping champion"<<endl;
    }
}

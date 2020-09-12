#include <bits/stdc++.h>
using namespace std;
const unsigned int maxVal = 9550000;
bool flag[maxVal];
vector<int> aVector;

void seive() {
    unsigned int m,n;
    aVector.push_back(2);
    for(m=3; m*m<maxVal; m+=2) {
        if(!flag[m]) {
            for(n=m*m; n<maxVal; n+=m*2) {
                flag[n]=true;
            }
        }
    }
    for(m=3; m<maxVal; m+=2) {
        if(!flag[m])
            aVector.push_back(m);
    }
}
int divisor(unsigned int aNum) {
    unsigned int m,countDiv=1;
    while(aNum%2==0) {
        aNum/=2;
        ++countDiv;
    }
    for(m=1; aVector[m]*aVector[m]<=aNum && m<aVector.size(); m++) {
        int div = 1;
        while(aNum%aVector[m]==0) {
            aNum/=aVector[m];
            ++div;
        }
        countDiv *= div;
    }
    if(aNum != 1)
        countDiv *= 2;
    return countDiv;
}
int main() {
    seive();
    ios_base::sync_with_stdio(false);
    unsigned int testCase; cin >> testCase;
    while(testCase != 0) {
        divisor(testCase)%2==0 ? cout<<"no\n" : cout<<"yes\n";
        cin >> testCase;
    }
}

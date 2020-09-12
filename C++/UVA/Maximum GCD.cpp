#include <bits/stdc++.h>
using namespace std;
int GCD(int n,int d) {
    return d==0 ? n : GCD(d,n%d);
}
int main() {
    ios_base::sync_with_stdio(false);
    int tests,totalInputs,maxGCD; cin >> tests;
    int anArr[99];
    string aStr;
    getline(cin,aStr);
    while(tests-- > 0) {
        getline(cin,aStr);
        totalInputs = 0;
        istringstream aStrStrm(aStr);
        maxGCD = 0;
        while(aStrStrm >> anArr[totalInputs]) {
            totalInputs++;
        }
        for(int m=0; m<totalInputs; m++) {
            for(int n=m+1; n<totalInputs; n++) {
                maxGCD = max(maxGCD,GCD(anArr[m],anArr[n]));
            }
        }
        cout << maxGCD << "\n";
    }
}

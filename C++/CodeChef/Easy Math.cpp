#include <bits/stdc++.h>
using namespace std;
int sumOfDig(int aNum) {
    int sum = 0;
    while(aNum>0) {
        sum += aNum%10;
        aNum /= 10;
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests,n,maxVal;
    cin >> tests;
    while(tests-- > 0) {
        cin >> n;
        maxVal = 0;
        int* anArr = new int(n);
        for(int m=0; m<n; m++) {
            cin >> anArr[m];
        }
        for(int a=0; a<n; a++) {
            for(int b=a+1; b<n; b++) {
                int sumOfPro = sumOfDig(anArr[a]*anArr[b]);
                sumOfPro > maxVal ? (maxVal=sumOfPro) : maxVal;
            }
        }
        cout << maxVal << endl;
    }
}

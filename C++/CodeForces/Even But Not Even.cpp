#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,secOddPos,odds,oddCount;
    string aStr;
    cin >> t;
    while(t-- > 0) {
        secOddPos = -1, odds = 0, oddCount = 0;
        cin >> n >> aStr;
        for(int i=0; i<n; i++) {
            if((aStr[i]-'0')%2!=0) {
                odds++;
                oddCount++;
                if(oddCount == 2) {
                    secOddPos = i;
                    break;
                }
            }
        }
        if(secOddPos == -1) {
            cout << "-1\n";
        } else {
            for(int i=0; i<=secOddPos; i++) {
                cout << aStr[i];
            }
            cout << "\n";
        }
    }
}

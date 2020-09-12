#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t,n,pos,neg,zeros;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        pos = 0;
        neg = 0;
        zeros = 0;
        int anArr[n];
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
            if(anArr[i]==0) {
                zeros++;
            } else if(anArr[i]>0) {
                pos += anArr[i];
            } else {
                neg += anArr[i];
            }
        }
        neg = abs(neg);
        if(pos+zeros == neg) {
            cout << zeros+1 << "\n";
        } else {
            cout << zeros << "\n";
        }
    }
}

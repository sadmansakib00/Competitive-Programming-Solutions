#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,nZero,nOne,nTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> nZero >> nOne >> nTwo;
        for(int i=0; i<nTwo; i++) {
            cout << "1";
        }
        if(nTwo>0 || nOne>0)
            cout << "1";
        if(nZero>0 || nOne>0)
            cout << "0";
        for(int i=0; i<nZero; i++) {
            cout << "0";
        }
        for(int i=0; i<nOne-1; i++) {
            if(i%2==0) cout << "1";
            else cout << "0";
        }
        cout << "\n";
    }
}

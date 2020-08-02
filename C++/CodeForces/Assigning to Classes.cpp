#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        n *= 2;
        int anArr[n];
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
        }
        sort(anArr,anArr+n);
        cout << anArr[n/2]-anArr[n/2-1] << "\n";
    }
}

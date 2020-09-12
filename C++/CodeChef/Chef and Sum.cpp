#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,k;
    bool flag;
    //int* anArr;
    cin >> t;
    while(t-- > 0 && cin >> n) {
        flag = false;
        cin >> k;
        int anArr[n];
        for(int m=0; m<n; m++) {
            cin >> anArr[m];
        }
        for(int m=0; m<n; m++) {
            for(int a = m+1; a<n; a++) {
                if(k==anArr[m]+anArr[a]) {
                    flag = true;
                    cout << "Yes\n";
                    m = n; //Breaking out of outer loop.
                    break; //Breaking out of this current loop.
                }
            }
        }
        if(!flag)
            cout << "No\n";
    }
}

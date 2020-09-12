#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int neck[n];
        int brac[n];
        for(int i=0; i<n; i++) {
            cin >> neck[i];
        }
        for(int i=0; i<n; i++) {
            cin >> brac[i];
        }
        sort(neck,neck+n);
        sort(brac,brac+n);
        for(int x : {1,2}) {
            for(int i=0; i<n; i++) {
                if(x == 1) {
                    if(i==n-1) {
                        cout << neck[i] << "\n";
                    } else {
                        cout << neck[i] << " ";
                    }
                } else {
                    if(i==n-1) {
                        cout << brac[i] << "\n";
                    } else {
                        cout << brac[i] << " ";
                    }
                }
            }
        }
    }
}

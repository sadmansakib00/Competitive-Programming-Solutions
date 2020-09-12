#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,d,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> d;
        int anArr[n];
        cin >> anArr[0];
        total = anArr[0];
        for(int i=1; i<n; i++) {
            cin >> anArr[i];
            if(d>0 && anArr[i]>0) {
                if(d/i>anArr[i]) {
                    d -= anArr[i]*i;
                    total += anArr[i];
                } else {
                    int temp = d/i;
                    total += temp;
                    d -= temp*i;

                }
            }
        }
        cout << total << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,p,total,minV,count;
    cin >> t;
    for(int m=0; m<t; m++) {
        total = 1;
        cin >> n;
        int anArr[n];
        cin >> anArr[0];
        minV = anArr[0];
        count = 1;
        for(int x=1; x<n; x++) {
            cin >> anArr[x];
            if(count==6) {
                minV = INT_MAX;
                for(int y=1; y<6; y++) {
                    if(minV>anArr[x-y])
                        minV = anArr[x-y];
                }
                count = 1;
            }
            if(anArr[x]<minV) {
                total++;
                count++;
            } else {
                count++;
            }
        }
        cout << total << "\n";
    }
}

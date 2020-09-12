#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,maxI,minI,tempI;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int anArr[n];
        maxI = 1, tempI = 1,minI=INT_MAX;
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
            if(i>0) {
                if(anArr[i]-anArr[i-1]<=2) {
                    tempI++;
                } else {
                    maxI = max(maxI,tempI);
                    minI = min(minI,tempI);
                    tempI = 1;
                }
            }
        }
        maxI = max(maxI,tempI);
        minI = min(minI,tempI);
        cout << minI << " " << maxI << "\n";
    }
}

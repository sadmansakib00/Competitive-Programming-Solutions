#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,sortedCount=0,ans=0;
    bool flag = false;
    cin >> n;
    int anArr[n+1];
    for(int i=1; i<=n; i++) {
       cin >> anArr[i];
    }
    for(int i : {16,8,4,2,1}) {
        int j=1; sortedCount = 1;
        while(j<=n) {
            for(int k=j+1; k<j+i && k<=n; k++) {
                if(anArr[k]>=anArr[k-1]) {
                    sortedCount++;
                }
            }
            if(sortedCount == i) {
                cout << i << "\n";
                flag = true;
                break;
            }
            j += i;
            sortedCount = 1;
        }
        if(flag) {
            break;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int anArr[15];
//int clockWise[15];
//int antiClockWise[15];
int n,ans=0;
int recursive(int i,int sum) {
    if(i==n) {
        if(sum==0 || sum%360==0) {
            ans = 0;
        }
        return 0;
    }
    recursive(i+1,sum+anArr[i]);
    recursive(i+1,sum-anArr[i]);
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    //memset(clockWise,-1,sizeof(clockWise));
    //memset(antiClockWise,-1,sizeof(antiClockWise));
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        ans+=anArr[i];
    }
    if(ans%360==0) {
        cout << "YES\n";
    } else if(n==1) {
        cout << "NO\n";
    } else {
        ans=-1;
        recursive(0,0);
        if(ans==0) cout << "YES\n";
        else cout << "NO\n";
    }
}

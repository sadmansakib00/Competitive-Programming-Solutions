#include<bits/stdc++.h>
using namespace std;
int anArr[1000001];
int dp(int n) {
    if(n==1) {
        return 0;
    } else {
        if(n%2==0) {
            if(anArr[n] == 0) {
                anArr[n] = dp(n/2)+1;
            }
            return anArr[n];
        } else {
            if(anArr[n-1] == 0) {
                if((n-1)%2 != 0)
                    anArr[n-1] = dp(n-1)+1;
                else
                    dp(n-1);
            }
            if(anArr[n+1] == 0) {
                if((n+1)%2 != 0)
                    anArr[n+1] = dp(n+1)+1;
                else
                    dp(n+1);
            }
            anArr[n] = min(anArr[n-1],anArr[n+1])+1;
            return anArr[n];
        }
    }
}
int main() {
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cout << dp(n) << "\n";
    }
}

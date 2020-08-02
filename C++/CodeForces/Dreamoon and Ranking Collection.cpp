#include<bits/stdc++.h>
using namespace std;
int comp(int x,int y) {
    if(x==y) return 0;
    return x-y-1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,ans,total;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        int result[n];
        int anArr[n];
        ans = -1;
        total = 0;
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
        }
        sort(anArr,anArr+n);
        if(x>=anArr[0]-1) {
            x = x-(anArr[0]-1);
        } else {
            cout << x << "\n";
            continue;
        }
        adjacent_difference(anArr,anArr+n,result,comp);
        for(int i=1; i<n; i++) {
            total += result[i];
            if(total > x) {
                ans = i-1;
                total -= result[i];
                break;
            }
        }
        if(ans == -1) {
            total = 0;
            total = accumulate(result+1,result+n,total);
            cout << anArr[n-1]+x-total<< "\n";
        } else {
            cout << anArr[ans]+x-total << "\n";
        }
    }
}

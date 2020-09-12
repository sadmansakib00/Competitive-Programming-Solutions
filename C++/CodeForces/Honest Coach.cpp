#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,dif;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        dif = INT_MAX;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=1; i<n; i++) dif = min(dif,abs(arr[i]-arr[i-1]));
        cout << dif << "\n";
    }
}

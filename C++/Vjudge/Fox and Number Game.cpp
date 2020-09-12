#include <bits/stdc++.h>
using namespace std;
int arraySum(int x[], int n) {
    int sum = 0;
    return accumulate(x,x+n,sum);
}
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int x[n];
    for(int m=0; m<n; m++)
        cin >> x[m];
    bool flag = true;
    while(flag) {
        flag = false;
        int *value = min_element(x+0,x+n);
        int minimum = *value;
        for(int m=0; m<n; m++) {
            if(minimum<x[m]) {
                flag = true;
                x[m] -= minimum;
            }
        }
    }
    cout << arraySum(x,n) << "\n";
}

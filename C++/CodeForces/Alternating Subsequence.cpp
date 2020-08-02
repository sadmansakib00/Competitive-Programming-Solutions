#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        ll pos = INT_MIN, neg = INT_MIN, sum = 0;
        flag = true;        //true = positive, false = negative
        ll anArr[n];
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
            if(i==0) {
                if(anArr[i]<0)  flag = false;
            }
            if(flag) {
                if(anArr[i]>0) {
                    pos = max(anArr[i],pos);
                } else {
                    flag = false;
                    neg = anArr[i];
                    sum += pos;
                    pos = INT_MIN;
                }
            } else {
                if(anArr[i]<0) {
                    neg = max(anArr[i],neg);
                } else {
                    flag = true;
                    pos = anArr[i];
                    sum += neg;
                    neg = INT_MIN;
                }
            }
        }
        if(flag) sum+=pos;
        else sum+=neg;
        cout << sum << "\n";
    }
}

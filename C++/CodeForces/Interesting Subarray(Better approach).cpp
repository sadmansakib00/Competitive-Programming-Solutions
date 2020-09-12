#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,l,r,temp,tempTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        l=-1, r=-1;
        for(int i=1; i<=n; i++) {
            cin >> temp;
            if(i>1) {
                if(abs(tempTwo-temp)>1) {
                    l = i-1;
                    r = i;
                }
            }
            tempTwo = temp;
        }
        if(l!=-1) {
            cout << "YES\n" << l << " " << r << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

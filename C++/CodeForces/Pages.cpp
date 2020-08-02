#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,p,k,i;
    bool flag = false;
    cin >> n >> p >> k;
    for(i=p-k; i<p+k; i++) {
        if(i>=1 && i<=n) {
            if(i==1) {
                flag = true;
                if(i==p) {
                    cout << "(1)";
                } else {
                    cout << "1";
                }
            } else if(i==n) {
                if(i==p) {
                    cout << " (" << n << ")\n";
                } else {
                    cout << " " << n << "\n";
                }
            } else if(i==p) {
                cout << " (" << i << ")";
            } else {
                if(!flag) {
                    cout << "<<";
                    flag = true;
                }
                cout << " " << i;
            }
        }
    }
    if(i == n) {
        cout << " " << i << "\n";
    } else if(i<n) {
        cout << " " << i << " >>\n";
    }
}

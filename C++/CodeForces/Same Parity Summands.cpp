#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n,k;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        flag = false;
        if(k<=n) {
            //For 1
            if((n-(k-1))%2!=0) {
                flag = true;
                cout << "YES\n";
                for(int i=0; i<k-1; i++) {
                    cout << "1 ";
                }
                cout << n-(k-1) << "\n";
            } else if((k-1)*2<n && (n-((k-1)*2))%2==0) {  //For 2
                flag = true;
                cout << "YES\n";
                for(int i=0; i<k-1; i++) {
                    cout << "2 ";
                }
                cout << n-((k-1)*2) << "\n";
            }
        }
        if(!flag) cout << "NO\n";
    }
}

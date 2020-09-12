#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

int main() {
    horsePower;
    ll t,n,temp,factTemp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        flag = false;
        vector<ll> fact;
        ll ans[3];
        cin >> n;
        temp = sqrt(n);
        for(int i=2; i<=temp; i++) {
            if(n%i==0) {
                fact.push_back(i);
                if(i != n/i) {
                    fact.push_back(n/i);
                }
            }
        }
        sort(fact.begin(),fact.end());
        /*
        cout << "THIS is factors of n = " << n << "\n";
        for(int k=0; k<fact.size(); k++) {
            cout << fact[k] << " ";
        }
        cout << "\n";
        */
        for(int i=0; i<fact.size()/2; i++) {
            vector<ll> factTwo;
            ans[0] = fact[i];
            factTemp = n/fact[i];
            temp = sqrt(factTemp);
            for(int j=2; j<=temp; j++) {
                if(factTemp%j==0) {
                    factTwo.push_back(j);
                    if(j != factTemp/j) {
                        factTwo.push_back(factTemp/j);
                    }
                }
            }
            sort(factTwo.begin(),factTwo.end());
            /*
            if(factTwo.size()%2==0) {
                temp = factTwo.size()/2 - 1;
            } else {
                temp = factTwo.size()/2;
            }

            cout << "THIS is factors of factTemp = " << factTemp << "\n";
            for(int k=0; k<factTwo.size(); k++) {
                cout << factTwo[k] << " ";
            }
            cout << "\n";
            */
            for(int k=0; k<factTwo.size()/2; k++) {
                //cout << "k == " << k << "\n";
                if(factTwo[k] != ans[0] && factTemp/factTwo[k] != ans[0]) {
                    ans[1] = factTwo[k];
                    ans[2] = factTemp/ans[1];
                    /*
                    if(ans[1] == ans[2]) {
                        continue;
                    }
                    */
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag) {
            cout << "YES\n" << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

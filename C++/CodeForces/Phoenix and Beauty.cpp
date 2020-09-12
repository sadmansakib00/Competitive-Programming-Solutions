#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define setPre(x) cout << fixed << setprecision(x);
#define sumOfN(n) ((ll)n*(n+1))/2
#define PLL pair<ll,ll>
#define PDL pair<double,ll>
#define VPDL vector<PDL>

int main() {
    horsePower;
    int t,n,k,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        bool mark[101] = {0};
        vector<int> v;
        vector<int> ans;
        for(int i=0; i<n; i++) {
            cin >> temp;
            v.push_back(temp);
            if(!mark[temp]) {
                mark[temp]=true;
                ans.push_back(temp);
            }
        }
        if(ans.size()>k) {
            cout << "-1\n";
        } else if(ans.size()==k){
            cout << 100*ans.size() << "\n";
            for(int i=0,j=0; i<100*ans.size(); i++,j++) {
                if(j==ans.size()) j=0;
                if(i!=0) cout << " ";
                cout << ans[j];
            }
            cout << "\n";
        } else {
            temp = ans.size()-1;
            for(int i=ans.size(); i<k; i++) {
                ans.push_back(ans[temp]);
            }
            cout << 100*ans.size() << "\n";
            for(int i=0,j=0; i<100*ans.size(); i++,j++) {
                if(j==ans.size()) j=0;
                if(i!=0) cout << " ";
                cout << ans[j];
            }
            cout << "\n";
        }
    }
}

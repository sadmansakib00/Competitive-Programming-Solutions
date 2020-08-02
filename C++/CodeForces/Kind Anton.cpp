#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,n;
    bool ans;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int a[n],b[n];
        vector<int> v(3);
        v[0]=-1,v[1]=-1,v[2]=-1;
        vector<vector<int> > flag(n);
        ans = true;
        for(int i=0; i<n; i++) {
            flag[i] = v;
            cin >> a[i];
            if(a[i]==0) v[0]=1;
            else if(a[i]==1) v[1]=1;
            else v[2]=1;
        }
        for(int i=0; i<n; i++) cin >> b[i];
        for(int i=n-1; i>-1; i--) {
            vector<int> temp = flag[i];
            if(a[i]!=b[i]) {
                if(b[i]<0) {
                    if(temp[2]==-1) {
                        ans = false;
                    }
                } else if(b[i]==0) {
                    if(a[i]>0) {
                        if(temp[2]==-1) {
                            ans = false;
                        }
                    } else {
                        if(temp[1]==-1) {
                            ans = false;
                        }
                    }
                } else {
                    if(temp[1]==-1) {
                        ans = false;
                    }
                }
            }
            if(!ans) break;
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}

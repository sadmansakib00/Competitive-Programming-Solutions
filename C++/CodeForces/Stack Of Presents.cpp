#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,n,m,total,pre,mark,countt;
    cin >> t;
    while(t-- > 0) {
        vector<int> found;
        cin >> n >> m;
        total = 0;
        mark = 0;
        pre = 0;
        int arrOne[n];
        int arrTwo[m];
        bool flag[100001]{0};
        for(int i=0; i<n; i++) {
            cin >> arrOne[i];
        }
        for(int i=0; i<m; i++) {
            cin >> arrTwo[i];
            flag[arrTwo[i]] = true;
        }
        for(int i=0; i<m; i++) {
            for(int j=mark; j<n; j++) {
                pre++;
                if(arrOne)
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

int main() {
    horsePower;
    int t,n,x,y,totalBox,boxCount,prev;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        flag = true;
        prev = 0;
        boxCount = 0;
        string ans="";
        vector<vector<int>> av;
        av.resize(1001);
        cin >> n;
        while(n-- > 0) {
            cin >> x >> y;
            av[x].push_back(y);
        }
        totalBox = 0;
        for(int i=0; i<1001; i++) {
            if(av[i].size()>0) {
                ans += "R";
                totalBox += av[i].size();
                sort(av[i].begin(),av[i].end());
                for(int j=0; j<2; j++) {
                    cout << "x = " << av[i][j] << "y = " << av[i][av.size()-1];
                }
                cout << "\n";
                if(av[i][av.size()-1] < prev) {
                    flag = false;
                } else {
                    for(int j=prev+1; j<=av[i][av.size()-1]; j++) {
                        ans += "U";
                    }
                    prev = av[i][av.size()-1];
                }
            } else {
                if(totalBox == n) {
                    break;
                }
                ans += "R";
            }
        }
        if(flag) {
            cout << "YES\n" << ans << "\n";
        } else {
            cout << "NO\n";
        }
    }
}

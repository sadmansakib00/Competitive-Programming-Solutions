#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,m,temp;
    bool flag = true;
    cin >> n >> k >> m;
    vector<vector<int>> dump(m);
    for(int i=0; i<n; i++) {
        cin >> temp;
        dump[temp%m].push_back(temp);
    }
    for(int i=0; i<m; i++) {
        if(dump[i].size()>=k) {
            flag = false;
            cout << "Yes\n";
            for(int j=0; j<k; j++) {
                if(j!=0) cout << " ";
                cout << dump[i][j];
            }
            cout << "\n";
            break;
        }
    }
    if(flag) cout << "No\n";
}

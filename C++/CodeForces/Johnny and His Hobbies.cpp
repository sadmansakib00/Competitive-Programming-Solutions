#include<bits/stdc++.h>
using namespace std;
bool visited[10001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t,n,temp;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<int> vOne;
        vector<int>::iterator it;
        for(int i=0; i<n; i++) {
            cin >> temp;
            vOne.push_back(temp);
        }
        if(n&1) { cout << "-1\n"; continue; }
        sort(vOne.begin(),vOne.end());
        for(int i=1; i<=1024; i++) {
            flag = true;
            memset(visited,0,sizeof(visited));
            for(int j=0; j<n; j++) {
                if(visited[vOne[j]]) continue;
                it = find(vOne.begin(),vOne.end(),vOne[j]^i);
                if(it==vOne.end()) {
                    flag = false;
                    break;
                }
                visited[vOne[it-vOne.begin()]]=true;
            }
            if(flag) {
                cout << i << "\n";
                break;
            }
            flag = false;
        }
        if(!flag) cout << "-1\n";
    }
}

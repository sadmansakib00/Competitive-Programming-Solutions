#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,p,c,curP,curC;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        p=0,c=0;
        flag = true;
        for(int i=0; i<n; i++) {
            cin >> curP >> curC;
            if(curP<p || curC<c || curC>curP || abs(curC-c)>abs(curP-p)) {
                flag = false;
            }
            p = curP;
            c = curC;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}

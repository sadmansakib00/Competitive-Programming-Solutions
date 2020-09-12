#include<bits/stdc++.h>
using namespace std;

int stairs[200001];
int elev[200001];
int ans[200001];
int n,c;
bool flag = true;
int dp(int floor, bool flag) {
    int x,y;
    if(ans[floor] != 0) {
        return ans[floor];
    }
    if(floor==1) {
        ans[1] = min(stairs[1],elev[1]+c);
        return ans[1];
    } else {
        if(flag) {
            x = dp(floor-1, flag);
            y = dp(floor-1, false);
            ans[floor] = min(x+stairs[floor],y+elev[floor]+c);
        } else {
            x = dp(floor-1, true);
            y = dp(floor-1, flag);
            ans[floor] = min(x+stairs[floor],y+elev[floor]);
        }
    }
    return ans[floor];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n >> c;
    for(int i=1; i<n; i++) {
        cin >> stairs[i];
    }
    for(int i=1; i<n; i++) {
        cin >> elev[i];
    }
    dp(n, flag);  //true means going by stairs
    for(int i=1; i<n; i++) {
        cout << ans[i] << " ";
    }
}

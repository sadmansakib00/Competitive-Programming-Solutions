#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
int main() {
    ios_base::sync_with_stdio(false);
    int t,x,y,nx,ny,ans;
    string aStr;
    map<char,pair<int,int>> dir;
    dir['N'] = {-1,+0};
    dir['S'] = {+1,+0};
    dir['W'] = {+0,-1};
    dir['E'] = {+0,+1};
    cin >> t;
    while(t-- > 0) {
        cin >> aStr;
        x=0, y=0, ans=0;
        set<pair<PII,PII>> flag;
        for(int i=0; i<aStr.length(); i++) {
            nx=x, ny=y;
            nx+=dir[aStr[i]].first;
            ny+=dir[aStr[i]].second;
            if(!flag.count({{x,y},{nx,ny}})) {
                flag.insert({{x,y},{nx,ny}});
                flag.insert({{nx,ny},{x,y}});
                ans += 5;
            } else {
                ans += 1;
            }
            x=nx, y=ny;
        }
        cout << ans << "\n";
    }
}

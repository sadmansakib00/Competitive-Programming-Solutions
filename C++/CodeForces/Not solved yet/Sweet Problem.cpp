#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    int t,r,g,b,maxx,mid,minn,rem,total,totalTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> r >> g >> b;

        maxx = max(r,max(g,b));
        minn = min(r,min(g,b));
        mid = (r+g+b)-(maxx+minn);
        totalTwo = mid;
        rem = maxx - mid;
        totalTwo += min(rem,minn);

        maxx = max(r,max(g,b));
        minn = min(r,min(g,b));
        mid = (r+g+b)-(maxx+minn);
        total = minn;
        maxx = maxx-minn/2;
        mid = mid - minn/2;
        if(minn%2 != 0) {
            maxx -= 1;
        }
        total += min(maxx,mid);
        cout << max(total,totalTwo) << "\n";
    }
}

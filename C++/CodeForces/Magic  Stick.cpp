#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t, x, y, temp,old;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        temp = 1;
        cin >> x >> y;
        flag = false;
        while(true) {
            old = x;
            cout << x << "   " << y << "\n";
            if(x%2==0 && x*(3/2)<y) {
                x = (x/2)*3;
                if(x==old)
                    break;
            } else if(x-y>1 || x==y || temp > 20) {
                if(x==y) {
                    flag = true;
                }
                break;
            } else if(abs(x-y)==1) {
                temp++;
            }
            else {
                old = x;
                x = x-1;
            }
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

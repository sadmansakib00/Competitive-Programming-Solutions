#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests,divX,divY,x,y;
    cin >> tests;
    while(tests != 0) {
        cin >> divX >> divY;
        for(int m=0; m<tests; m++) {
            cin >> x >> y;
            if(x==divX || y==divY) {
                cout << "divisa\n";
            } else if(x>divX && y>divY) {
                cout << "NE\n";
            } else if(x>divX && y<divY) {
                cout << "SE\n";
            } else if(x<divX && y<divY) {
                cout << "SO\n";
            } else {
                cout << "NO\n";
            }
        }
        cin >> tests;
    }
}

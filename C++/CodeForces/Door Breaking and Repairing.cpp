#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,x,y,temp,breakable=0;
    cin >> n >> x >> y;
    for(int i=0; i<n; i++) {
        cin >> temp;
        if(temp<=x) {
            breakable++;
        }
    }
    if(x>y) {
        cout << n << "\n";
    } else {
        cout << (breakable+1)/2 << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,a,b;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b;
        if(a-b==0) {
            cout << "0\n";
        } else if((a-b<0 && (a-b)%2==0) || (a-b>0 && (a-b)%2!=0)) {
            cout << "2\n";
        } else if(a-b<0 && (a-b)%2!=0 || (a-b>0 && (a-b)%2==0)) {
            cout << "1\n";
        }
    }
}

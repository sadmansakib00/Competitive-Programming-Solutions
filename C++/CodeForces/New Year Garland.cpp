#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t;
    int anArr[3];
    bool flag;
    cin >> t;
    while(t-- > 0) {
        flag = true;
        cin >> anArr[0] >> anArr[1] >> anArr[2];
        sort(anArr,anArr+3);
        if(anArr[0]+anArr[1]<anArr[2]-1) {
            flag = false;
        } /*else if(anArr[0]<anArr[1]-1) {
            flag = false;
        }*/
        if(flag) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

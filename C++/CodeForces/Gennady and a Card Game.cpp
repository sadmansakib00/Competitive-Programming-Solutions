#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string onTable,onHand;
    bool flag = false;
    cin >> onTable;
    for(int i=0; i<5; i++) {
        cin >> onHand;
        if(onTable[0]==onHand[0] || onTable[1]==onHand[1] && !flag) {
            flag = true;
            cout << "YES\n";
        }
    }
    if(!flag) cout << "NO\n";
}

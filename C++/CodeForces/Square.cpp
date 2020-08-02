#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,aOne,aTwo,bOne,bTwo;
    cin >> t;
    while(t-- > 0) {
        cin >> aOne >> bOne >> aTwo >> bTwo;
        if(aOne<bOne) swap(aOne,bOne);
        if(aTwo<bTwo) swap(aTwo,bTwo);
        if(aOne == aTwo && aOne == bOne+bTwo) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}

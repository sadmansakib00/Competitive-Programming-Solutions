#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,temp; cin >> t;
    while(t-- > 0) {
        cin >> n;
        map<int,int> aMap;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap[temp] = 1;
        }
        cout << aMap.size() << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,k,t,total=0;
    cin >> n >> k;
    while(n-- > 0) {
        cin >> t;
        if(t%k==0)
            total++;
    }
    cout << total << "\n";
}

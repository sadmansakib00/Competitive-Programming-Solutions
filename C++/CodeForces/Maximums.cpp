#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,temp,maxTillNow=0;
    cin >> n;
    for(int i=0; i<n-1; i++) {
        cin >> temp;
        cout << maxTillNow+temp << " ";
        if(maxTillNow+temp>maxTillNow) {
            maxTillNow += temp;
        }
    }
    cin >> temp;
    cout << maxTillNow+temp << "\n";
}

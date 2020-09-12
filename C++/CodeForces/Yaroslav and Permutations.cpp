#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,temp,maxx=INT_MIN;
    int anArr[1001]={0};
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        anArr[temp]++;
        maxx = max(maxx,anArr[temp]);
    }
    if(maxx<=(n-1)/2+1) cout << "YES\n";
    else cout << "NO\n";
}

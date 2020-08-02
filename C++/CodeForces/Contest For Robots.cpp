#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,ans=0,div=0;
    cin >> n;
    bool aArr[n],bArr[n];
    for(int i=0; i<n; i++) cin >> aArr[i];
    for(int i=0; i<n; i++) cin >> bArr[i];
    for(int i=0; i<n; i++) {
        if(!aArr[i] && bArr[i]) ans++;
        if(aArr[i] && !bArr[i]) div++;
    }
    if(div==0) cout << "-1\n";
    else cout << (ans/div)+1 << "\n";
}

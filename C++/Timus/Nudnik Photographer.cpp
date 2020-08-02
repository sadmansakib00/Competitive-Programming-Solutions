#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL n,ans=0;
void frameDes(LL i, LL level, bool mask[]) {
    cout << "i = " << i << " level = " << level << "\n";
    for(int j=1; j<9; j++) {
        cout << j << " ";
    }
    cout << "\n";
    for(int j=1; j<9; j++) {
        cout << mask[j] << " ";
    }
    cout << "\n";
    if(level == n) {
        ans++;
    } else {
        bool arr[64];
        for(int j=0; j<64; j++) {
            arr[j] = mask[j];
        }
        if(i-2 >= 1 && !mask[i-2]) {
            cout << "i = " << i << " i-2 = " << i-2 << "\n";
            arr[i-2] = 1;
            frameDes(i-2,level+1,arr);
            arr[i-2] = 0;
        }
        if(i-1 >= 1 && !mask[i-1]) {
            cout << "i = " << i << " i-1 = " << i-1 << "\n";
            arr[i-1] = 1;
            frameDes(i-1,level+1,arr);
            arr[i-1] = 0;
        }
        if(i+1 <= n && !mask[i+1]) {
            cout << "i = " << i << " i+1 = " << i+1 << "\n";
            arr[i+1] = 1;
            frameDes(i+1,level+1,arr);
            arr[i-1] = 0;
        }
        if(i+2 <= n && !mask[i+2]) {
            cout << "i = " << i << " i+2 = " << i+2 << "\n";
            arr[i+2] = 1;
            frameDes(i+2,level+1,arr);
            arr[i+2] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    bool mask[64] = {0};
    mask[1] = 1;
    frameDes(1,1,mask);
    cout << ans << "\n";
}

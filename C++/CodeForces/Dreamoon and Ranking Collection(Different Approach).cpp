#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,curPos;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        curPos = 0;
        int anArr[n];
        for(int i=0; i<n; i++) cin >> anArr[i];
        sort(anArr,anArr+n);
        if(x>=anArr[0]-1) {
            x-=(anArr[0]-1);
            curPos = anArr[0];
        } else {
            cout << x << "\n";
            continue;
        }
        for(int i=1; i<n; i++) {
            int dif = anArr[i]-anArr[i-1];
            if(dif>1 && x>0) {
                dif--;
                if(x>=dif) {
                    curPos = anArr[i];
                    x -= dif;
                } else {
                    curPos = anArr[i-1]+x;
                    x = 0;
                    break;
                }
            } else if(dif>1 && x==0) {
                break;
            } else {
                curPos = anArr[i];
            }
        }
        if(x>0) curPos += x;
        cout << curPos << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t-- > 0) {
        int anArr[100001];
        for(int m=0; m<100001; m++)
            anArr[m]=0;
        int n,q,max=0,temp=0;
        cin >> n >> q;
        while(n-- > 0) {
            cin >> temp;
            anArr[temp]++;
        }
        sort(anArr,anArr+100001,greater<int>());
        for(int m=0; m<q; m++) {
            max = 0;
            cin >> temp;
            for(int x=0; x<temp; x++)
                max += anArr[x];
            cout << max << "\n";
        }
        if(q==0)
            cout<< 0 <<"\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,total;
    int anArr[3];
    cin >> t;
    while(t-- > 0) {
        cin >> anArr[0] >> anArr[1] >> anArr[2];
        total=0;
        if(anArr[0]>0) {
            anArr[0]--; total++;
        }
        if(anArr[1]>0) {
            anArr[1]--; total++;
        }
        if(anArr[2]>0) {
            anArr[2]--; total++;
        }
        sort(anArr,anArr+3,greater<int>());
        if(anArr[0]>0 && anArr[1]>0) {
            anArr[0]--; anArr[1]--; total++;
        }
        if(anArr[0]>0 && anArr[2]>0) {
            anArr[0]--; anArr[2]--; total++;
        }
        if(anArr[1]>0 && anArr[2]>0) {
            anArr[1]--; anArr[2]--; total++;
        }
        if(anArr[0]>0 && anArr[1]>0 && anArr[2]>0) {
            total++;
        }
        cout << total << "\n";
    }
}

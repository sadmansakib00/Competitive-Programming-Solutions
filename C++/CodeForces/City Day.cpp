#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,x,y;
    bool flag;
    cin >> n >> x >> y;
    int* anArr = new int[n];
    for(int m=0; m<n; m++) {
        cin >> anArr[m];
    }
    for(int m=0; m<n; m++) {
        flag = true;
        for(int a=1; a<=x; a++) {
            if(m-a>=0) {
                if(anArr[m]>anArr[m-a]) {
                    flag = false;
                    break;
                }
            }
        }
        for(int a=1; a<=y;  a++) {
            if(m+a<n) {
                if(anArr[m]>anArr[m+a]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag) {
            cout << m+1 << "\n";
            break;
        }
    }
}

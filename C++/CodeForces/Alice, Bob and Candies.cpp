#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,alice,bob,tA,tB,moves;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int candies[n];
        alice=0,bob=0,tA=0,tB=0,moves=0;
        flag = true;
        for(int i=0; i<n; i++)  cin >> candies[i];
        for(int i=0,j=n-1; i<=j;) {
            moves++;
            if(flag) {
                while(true) {
                    tA+=candies[i];
                    alice+=candies[i];
                    i++;
                    if(tA>tB || i>j) {
                        flag = false;
                        tB = 0;
                        break;
                    }
                }
            } else {
                while(true) {
                    tB+=candies[j];
                    bob+=candies[j];
                    j--;
                    if(tB>tA || j<i) {
                        flag = true;
                        tA = 0;
                        break;
                    }
                }
            }
        }
        cout << moves << " " << alice << " " << bob << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
LL dp[46][3]; //0=white, 1=blue, 2=red
LL n;
LL flagDecor(int i, int prevCol, int twoBackCol) {
    if(i==1) {
        return flagDecor(i+1,0,0) + flagDecor(i+1,2,2);
    } else {
        if(i==n) {
            return 1;
        } else {
            //cout << "i = " << i << " prevCol = " << prevCol << " twoBackCol = " << twoBackCol << "\n";
            if(dp[i][prevCol] != -1) return dp[i][prevCol];
            LL tOne,tTwo;
            tOne = tTwo = 0;
            if(prevCol==0) {
                if(i<n) {
                    tOne = flagDecor(i+1,1,prevCol);
                }
                tTwo = flagDecor(i+1,2,prevCol);
            } else if (prevCol==2) {
                if(i<n) {
                    tOne = flagDecor(i+1,1,prevCol);
                }
                tTwo = flagDecor(i+1,0,prevCol);
            } else {
                if(twoBackCol == 0) {
                    tOne = flagDecor(i+1,2,prevCol);
                } else {
                    tOne = flagDecor(i+1,0,prevCol);
                }
            }
            //cout << "tOne = " << tOne << " tTwo = " << tTwo << "\n";
            dp[i][prevCol] = tOne + tTwo;
            return dp[i][prevCol];
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    if(n==1) {
        cout << "2\n";
        return 0;
    }
    memset(dp,-1,sizeof(dp));
    cout << flagDecor(1,-1,-1) << "\n";
    /*
    for(int i=0; i<46; i++) {
        for(int j=0; j<3; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    */
}

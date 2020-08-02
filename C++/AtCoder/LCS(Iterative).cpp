#include<bits/stdc++.h>
using namespace std;
string a,b,dp[3001][3001];
int alen,blen;
static int loops = 0;
string LCS(int i, int j) {
    //cout << "i = " << i << " j = " << j << "\n";
    if(i==alen || j==blen) return "";
    if(dp[i][j] != "-1") return dp[i][j];
    loops++;
    if(a[i]==b[j]) {
        dp[i][j] = a[i]+LCS(i+1,j+1);
    } else {
        string ansA = LCS(i+1,j);
        string ansB = LCS(i,j+1);
        dp[i][j] = ansA.length()>ansB.length() ? ansA : ansB;
    }
    return dp[i][j];
}
int main() {
    ios_base::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    cin >> a >> b;
    alen = a.length(), blen = b.length();
    for(int i=0; i<alen; i++) {
        for(int j=0; j<blen; j++) {
            dp[i][j] = "-1";
        }
    }
    //for(int i=0)
    cout << LCS(0,0) << "\n";
    cout << "total iteration = " << loops << "\n";
}

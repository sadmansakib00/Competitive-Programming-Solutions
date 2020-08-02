#include <bits/stdc++.h>
using namespace std;

int aMatrix[202][101];
int dp[202][101];

long long int maxB(int n,int z, int x,int y,bool flag) {
	if(!flag)
		++z;
	else
		--z;
    if(n==x)
		flag = true;
	if(x==2*n)
		return aMatrix[x][1];
    if(dp[x][y]!=-1)
        return dp[x][y];
	if(!flag && x<n) {
		if(dp[x][y]==-1) {
			dp[x][y]=aMatrix[x][y]+(maxB(n,z,x+1,y,flag)>maxB(n,z,x+1,y+1,flag)?maxB(n,z,x+1,y,flag):maxB(n,z,x+1,y+1,flag));
		}
		return dp[x][y];
	} else {
		if(y==1) {
			if(dp[x][y]==-1)
				dp[x][y] = aMatrix[x][1]+maxB(n,z,x+1,y,flag);
			return dp[x][y];
		}
		if(y==z) {
			if(dp[x][y]==-1)
				dp[x][y] = aMatrix[x][y]+maxB(n,z,x+1,y-1,flag);
			return dp[x][y];
		}
		else {
			if(dp[x][y]==-1) {
				dp[x][y]=aMatrix[x][y]+(maxB(n,z,x+1,y-1,flag)>maxB(n,z,x+1,y,flag)?maxB(n,z,x+1,y-1,flag):maxB(n,z,x+1,y,flag));
			}
			return dp[x][y];
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	int test,n;
	cin >> test;
	for(int m=1; m<=test; m++) {
		memset(dp,-1,sizeof(dp));
		memset(aMatrix,0,sizeof(aMatrix));
		cin >> n;
		for(int y=1,g=0; y<=2*n; y++) {
			if(y>n)
				--g;
			else
				++g;
			for(int z=1; z<=g; z++) {
				cin >> aMatrix[y][z];
			}
		}
		cout<<"Case "<<m<<": "<<maxB(n,0,1,1,false)<<"\n";
	}
}

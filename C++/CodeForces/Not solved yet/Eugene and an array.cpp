#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
int main() {
    horsePower;
    ll n,ans=0;
    cin >> n;
    ll a[n],cumSum[n]={0};
    bool flag[n] = {0};
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(i==0) cumSum[i]=a[i];
        else cumSum[i] = cumSum[i-1]+a[i];
        if(a[i]!=0) {
            ans++;
        }
        if(i>0) {
            if(a[i]+a[i-1]!=0) {
                ans++;
            } else {
                flag[i]=true;
                flag[i-1]=true;
            }
        }
    }
    for(int i=3; i<=n; i++) {
        for(int j=0; j<n; j++) {
            if(j+i-1>n-1) break;
            bool temp = false;
            for(int k=j; k<j+i; k++) {
                if(flag[k]) {
                    temp = true;
                }
                if(temp && !flag[k]) {
                    j=k;
                    break;
                }
            }
            if(temp) {
                j=i+j;
                break;
            }
            if(j==0) {
                if(cumSum[i-1]!=0) ans++;
                else {
                    for(int k=0; k<i; k++) {
                        flag[k]=true;
                    }
                    j=i;
                }
            } else {
                if(cumSum[j+i-1]-cumSum[j-1]!=0) ans++;
                else {
                    for(int k=j; k<j+i; k++) {
                        flag[k] = true;
                    }
                    j=j+i;
                }
            }
        }
    }
    cout << ans << "\n";
}

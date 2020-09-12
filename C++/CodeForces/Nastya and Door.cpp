#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,k,curPeaks;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        curPeaks = 0;
        int anArr[n];
        int peak[n] = {0};
        map<int,pair<int,int>,greater<int> > aMap;
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
            if(i!=0 && i!=1) {
                if(anArr[i-1]>anArr[i-2] && anArr[i-1]>anArr[i]) {
                    curPeaks++;
                    peak[i-1] = 1;
                }
                if(i>=k-1) {
                    if(peak[i-k+1]==1) {
                        //cout << "Here\n";
                        curPeaks--;
                    }
                    //cout << "curPeaks = " << curPeaks << "\n";
                    //cout << "l,r = " << i-k+2 << "," << i+1 << "\n";
                    aMap.insert(make_pair(curPeaks,make_pair(i-k+2,i+1)));

                }
            }
        }
        cout << aMap.begin()->first+1 << " " << aMap.begin()->second.first << "\n";
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,c,temp,lo,hi,mid,cowCount,lastPos;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> c;
        vector<int> aV;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aV.push_back(temp);
        }
        sort(aV.begin(),aV.end());
        hi = aV[aV.size()-1] - aV[0];
        lo = 1;
        while(hi>=lo) {
            mid = (hi+lo)/2;
            cowCount = 1;
            lastPos = aV[0];
            for(int i=1; i<n; i++) {
                if((aV[i]-lastPos)>=mid) {
                    lastPos = aV[i];
                    cowCount++;
                }
            }
            if(cowCount >= c) {
                temp = mid;
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        cout << temp << "\n";
    }
}

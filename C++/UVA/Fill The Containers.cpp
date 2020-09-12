#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,temp,lo=INT_MAX,hi,mid,containers,ans;
    bool flag;
    while(cin >> n) {
        cin >> m;
        vector<int> aV;
        hi = 0;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aV.push_back(temp);
            hi += temp;
            lo = min(lo,temp);
        }
        cout << "lo = " << lo << "\n";
        cout << "hi = " << hi << "\n";
        while(hi >= lo) {
            cout << "lo+hi = " << lo+hi << "\n";
            mid = (lo+hi)/2;
            cout << "mid = " << mid << "\n";
            containers = 0;
            temp=0;
            flag = true;
            for(int i=0; i<n; i++) {
                temp+=aV[i];
                cout << "temp = " << temp << "mid = " << mid << "\n";
                if(temp>mid) {
                    containers++;
                    if(containers>m) {
                        flag = false;
                        break;
                    }
                    temp = aV[i];
                    cout << "aV[i] = " << aV[i] << "\n";
                    if(aV[i] > mid) {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) {
                ans = mid;
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        cout << ans << "\n";
    }
}

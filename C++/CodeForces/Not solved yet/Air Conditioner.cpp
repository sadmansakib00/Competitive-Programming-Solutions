#include <bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,m,inTime,l,h,curTime,timeAvailable,timeRequired,leftTime;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        curTime = 0;
        cin >> n >> m;
        leftTime = 0;
        flag = true;
        while(n-- > 0) {
            cin >> inTime >> l >> h;
            if(m>=l && m<=h) {
                continue;
            }
            if(m>h) { //Means current temperature is greater than the preferred higher bound
                timeAvailable = inTime - curTime;
                timeRequired = m-h;
                if(timeRequired <= timeAvailable) {
                    //curTime += timeRequired;
                    m = h;
                } else {
                    //cout << "InTime = " << inTime << " and curTemp = " << m << "\n";
                    flag = false;
                }
            } else if(m<l) {
                timeAvailable = inTime - curTime;
                timeRequired = l-m;
                //cout << "TA = " << timeAvailable << " TR = " << timeRequired << "\n";
                if(timeRequired <= timeAvailable) {
                    //curTime += timeRequired;
                    m = l;
                } else {
                    //cout << "InTime = " << inTime << " and curTemp = " << m << "\n";
                    flag = false;
                }
            }
            curTime = inTime;
        }
        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

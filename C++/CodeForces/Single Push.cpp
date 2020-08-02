#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,temp,tempPos;
    bool flag,disFlag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        flag = true;
        disFlag = true;
        int arrOne[n];
        int arrTwo[n];
        vector<int> dif;
        for(int m=0; m<n; m++) {
            cin >> arrOne[m];
        }
        for(int m=0; m<n; m++) {
            cin >> arrTwo[m];
        }
        for(int m=0; m<n; m++) {
            if(arrOne[m] != arrTwo[m]) {
                flag = false;
            }
            temp = arrTwo[m]-arrOne[m];
            if(temp > 0) {
                if(dif.size()>=1) {
                    if(tempPos != m-1) {
                        disFlag = false;
                        break;
                    }
                    if(dif[dif.size()-1] != temp) {
                        tempPos = m;
                        dif.push_back(temp);
                    } else {
                        tempPos = m;
                    }
                } else {
                    tempPos = m;
                    dif.push_back(temp);
                }
            } else if(temp<0) {
                disFlag = false;
                break;
            }
        }
        if((dif.size() == 1 && disFlag) || flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}

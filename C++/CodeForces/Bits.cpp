#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
vector<ll> powerOfTwo;
vector<ll> powerOfTwoMinusOne;
void makePowerOfTwo() {
    powerOfTwo.push_back(1);
    for(int i=1; i<62; i++) {
        powerOfTwo.push_back(powerOfTwo[i-1]*2);
        powerOfTwoMinusOne.push_back(powerOfTwo[i]-1);
    }
}
int main() {
    ll t,l,r,maxIn,maxLeft;
    bool flag;
    makePowerOfTwo();
    cin >> t;
    while(t-- > 0) {
        cin >> l >> r;
        if(l==0 && r==0) {
            cout << "0\n";
        } else if(l == r ) {
            cout << l << "\n";
        } else {
            maxIn = 0;
            maxLeft = 0;
            flag = false;
            for(int i=0; i<61; i++) {
                if(powerOfTwoMinusOne[i]>=l && powerOfTwoMinusOne[i]<=r) {
                    flag = true;
                    maxIn = max(maxIn,powerOfTwoMinusOne[i]);
                }
                if(powerOfTwoMinusOne[i]<l) {
                    maxLeft = powerOfTwoMinusOne[i];
                }
            }
            if(flag) {
                cout << maxIn << "\n";
            } else {
                LOOP:
                maxLeft++;
                for(int i=0; i<62; i++) {
                    maxLeft += powerOfTwo[i];
                    if(maxLeft > r) {
                        maxLeft -= powerOfTwo[i];
                        if(!(maxLeft>=l && maxLeft<=r)) {
                            goto LOOP;
                        }
                        break;
                    }
                }
                cout << maxLeft << "\n";
            }
        }
    }
}

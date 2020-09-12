#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long lowBound,upperBound,v(0),s(0);
    cin >> lowBound >> upperBound;
    while(lowBound != 0 && upperBound != 0) {
        v = s = 0;
        if(lowBound>upperBound) {
            lowBound = lowBound+upperBound;
            upperBound = lowBound-upperBound;
            lowBound -= upperBound;
        }
        for(long m=lowBound,count=0,temp=0; m<=upperBound; m++) {
            temp = m;
            count = 0;
            while(true) {
                ++count;
                if(temp%2==0)
                    temp = temp/2;
                else
                    temp = 3*temp+1;
                if(temp==1)
                    break;
            }
            if(count>s) {
                s = count;
                v = m;
            }
        }
        cout<<"Between "<<lowBound<<" and "<<upperBound<<", "<<v
            <<" generates the longest sequence of "<<s<<" values.\n";
        cin >> lowBound >> upperBound;
    }
}

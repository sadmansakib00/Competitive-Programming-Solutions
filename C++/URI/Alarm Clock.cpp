#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int h1,h2,m1,m2,ansH=0,ansM=0;
    cin >> h1 >> m1 >> h2 >> m2;
    while(h1!=0 || m1!=0 || h2!=0 || m2!=0) {
        if(h1>h2 || (h1==h2 && m1>m2)) {
            ansH = 23-h1+h2;
            ansM = 60-m1+m2;
        } else {
            if(m1>m2) {
                ansH = h2-1-h1;
                ansM = 60+m2-m1;
            } else {
                ansH = h2-h1;
                ansM = m2-m1;
            }
        }
        cout << ansH*60+ansM << "\n";
        cin >> h1 >> m1 >> h2 >> m2;
    }
}

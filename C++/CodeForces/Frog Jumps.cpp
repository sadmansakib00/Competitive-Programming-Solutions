#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,Lcount,maxL;
    string s;
    cin >> t;
    while(t-- > 0) {
        cin >> s;
        Lcount = 1, maxL = 1;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='L') {
                Lcount++;
            } else {
                maxL = max(Lcount,maxL);
                Lcount = 1;
            }
        }
        maxL = max(Lcount,maxL);
        cout << maxL << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cout << sizeof(unsigned long long int);
    cin >> t;
    int anArr[10];
    while(t-- > 0) {
        vector<int> v;
        for(int m=1; m<10; m++) {
            cin >> anArr[m];
            for(int n=0; n<anArr[m]; n++) {
                v.push_back(m);
            }
        }
    }

}

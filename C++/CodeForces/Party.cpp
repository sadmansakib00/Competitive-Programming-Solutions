#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests;
    cin >> tests;
    int anArr[tests+1],m=1;
    while(m<=tests) {
        cin >> anArr[m++];
    }
    int maxNo = 1;
    for(m=1; m<=tests; m++) {
        int temp = 1;
        int n = m;
        while(anArr[n] != -1) {
            n = anArr[n];
            temp++;
        }
        if(temp>maxNo)
            maxNo = temp;
    }
    cout << maxNo << "\n";
}

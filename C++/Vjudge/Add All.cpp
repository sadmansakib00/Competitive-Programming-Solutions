#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n != 0) {
        int anArr[n];
        for(int m=0; m<n; m++)
            cin >> anArr[m];
        sort(anArr,anArr+n);
        int cost = anArr[0]+anArr[1];
        int sum = cost;
        for(int m=2; m<n; m++) {
            sum = anArr[m]+sum;
            cost += sum;
        }
        cout << cost << "\n";
        cin >> n;
    }
}

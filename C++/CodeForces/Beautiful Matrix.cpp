#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int row,col,temp;
    for(int i=1; i<6; i++) {
        for(int j=1; j<6; j++) {
            cin >> temp;
            if(temp==1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(3-row)+abs(3-col) << "\n";
}

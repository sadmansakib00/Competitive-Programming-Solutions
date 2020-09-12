#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int anArr[x];
    cin >> anArr[0];
    for(int m=1; m<x; m++) {
        cin >> anArr[m];
    anArr[m] += anArr[m-1];
    }
    cin >> x;
            int i,j;
    for(int m=0; m<x; m++) {
        cin >> i;
        cin >> j;
        if(i == 0)
            cout<<anArr[j]<<endl;
        else
            cout <<anArr[j]-anArr[i-1]<<endl;
    }
}

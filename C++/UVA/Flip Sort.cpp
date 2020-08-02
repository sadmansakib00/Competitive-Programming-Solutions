#include <bits/stdc++.h>
using namespace std;
int main() {
    int tests,counter,temp,n;
    while(cin >> tests) {
        int anArr[tests];
        counter = 0;
        for(int m=0; m<tests; m++) {
            cin >> anArr[m];
            temp = anArr[m];
            n = m-1;
            while(n>=0 && anArr[n]>temp) {
                anArr[n+1]=anArr[n];
                --n;
                ++counter;
            }
            anArr[++n]=temp;
        }
        cout << "Minimum exchange operations : " << counter << "\n";
    }
}

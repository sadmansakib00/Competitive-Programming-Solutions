#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tests; cin>>tests;
    while(tests>0) {
        int quantity; cin>>quantity;
        int anArr[quantity];
        int sum(0),sum2(0);
        for(int m=0; m<quantity; m++) {
            cin>>anArr[m];
            sum+=anArr[m];
        }
        double avg = (double)sum/quantity;
        for(int m=0; m<quantity; m++) {
            if(anArr[m]>avg)
                ++sum2;
        }
        avg = (double)sum2/quantity*100;
        printf("%.3f%\n",avg);
        --tests;
    }
}

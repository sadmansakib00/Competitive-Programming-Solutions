#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int tests; cin >> tests;
    for(int m=1; m<=tests; m++) {
        int c1,f1; cin>>c1>>f1;
        double x = c1*(double)9/5+32;
        x += f1;
        x = (x-32)*5/9;
        printf("Case %d: %.2f\n",m,x);
    }
}

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
using namespace std;
int main() {
    int tests;
    cin >> tests;
    double radius;
    for(int m=1; m<=tests; m++) {
        cin >> radius;
        cout << "Case "<<m<<": ";
        printf("%.2f\n",(pow(2*radius,2)-2*acos(0.0)*pow(radius,2)));
    }
}

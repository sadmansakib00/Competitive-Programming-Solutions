#include <iostream>
#include <math.h>
using namespace std;

unsigned long long int result(unsigned long long int n,unsigned long long int a) {
    if(n==1)
        return a;
    else {
        return n*pow(a,n)+result(n-1,a);
    }
}
int main() {
    long long int x,y;
    while(cin >> x >> y) {
        cout << result(x,y) << endl;
    }
}

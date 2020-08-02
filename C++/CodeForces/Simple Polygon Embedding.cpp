#include<iostream>
#include<cmath>
#include<ios>
#include<iomanip>
using namespace std;
#define pi (4*atan(1))
int main() {
    ios_base::sync_with_stdio(false);
    int t;
    double n;
    cin >> t;
    cout << fixed << setprecision(9);
    while(t-- > 0) {
        cin >> n;
        cout << 1/tan(pi/(2*n)) << "\n";
    }
}

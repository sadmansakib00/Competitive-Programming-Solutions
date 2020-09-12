#include<bits/stdc++.h>
using namespace std;
#define M_PI 3.14159265358979323846
int main() {
    ios_base::sync_with_stdio(false);
    double n,r,theta;
    cin >> n >> r;
    theta = ((360/(n*2))*M_PI)/180;
    cout << fixed << setprecision(7);
    cout << (r*sin(theta))/(1-sin(theta)) << "\n";
}

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
long long int sumOfDivisors(int n) {
    int limit = sqrt(n);
    long long int sum = 0;
    for(int m=1; m<=limit; m++) {
        if(n%m==0) {
            if(n/m==m)
                sum += m;
            else
                sum += m+n/m;
        }
    }
    return sum;
}
int main() {
    ios_base::sync_with_stdio(false);
    int n,temp; cin >> n;
    cout << "PERFECTION OUTPUT\n";
    while(n != 0) {
        temp = sumOfDivisors(n)-n;
        cout << right << setw(5) << n << "  ";
        if(temp == n)
            cout << "PERFECT\n";
        else if(temp < n)
            cout << "DEFICIENT\n";
        else
            cout << "ABUNDANT\n";
        cin >> n;
    }
    cout << "END OF OUTPUT\n";
}

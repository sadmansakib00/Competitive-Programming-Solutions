#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int tests,lowBound,upBound,terms,sum(0),count(1);
    cin >> tests;
    while(tests-- > 0) {
        cin >> lowBound >> upBound;
        lowBound = lowBound%2==0 ? lowBound+1 : lowBound;
        upBound = upBound%2==0 ? upBound-1 : upBound;
        terms = (upBound-lowBound)/2+1;
        sum = (terms*(lowBound+upBound))/2;
        cout << "Case "<<count<<": "<< sum <<"\n";
        ++count;
    }
}

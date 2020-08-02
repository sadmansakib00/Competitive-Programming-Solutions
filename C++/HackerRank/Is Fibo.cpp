#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
string isItFib(lli firstN, lli secondN, lli source) {
    if(source==1 || source==firstN)
        return "IsFibo";
    if(firstN<source) {
        return isItFib(secondN, firstN+secondN, source);
    } else {
        return "IsNotFibo";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    lli t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cout << isItFib(1,1,n) << "\n";
    }
}

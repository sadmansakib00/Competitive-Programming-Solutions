#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,m,a,b,total,left;
    cin >> n >> m >> a >> b;
    total = ceil((double)n/m);
    left = n-(total-1)*m;
    cout << min(total*b,min(n*a,left*a+(total-1)*b)) << "\n";
}

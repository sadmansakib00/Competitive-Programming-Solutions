#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main() {
    horsePower;
    int t,s,v,j,f,l,total=0,temp;
    cin >> t >> s >> v >> j >> f >> l;
    if(l>f) {
        temp = min(min(s,v),j);
        total = l * temp;
        j -= temp;
        total += f * min(t,j);
    } else {
        temp = min(t,j);
        total = f * temp;
        j -= temp;
        total += l * min(min(s,v),j);
    }
    cout << total << "\n";
}

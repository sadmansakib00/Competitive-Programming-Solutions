#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sumOfN(n) ((ll)n*(n+1))/2
int main() {
    ios_base::sync_with_stdio(false);
    int w,h,uOne,dOne,uTwo,dTwo;
    cin >> w >> h >> uOne >> dOne >> uTwo >> dTwo;
    if(dOne>dTwo) {
        swap(dOne,dTwo);
        swap(uOne,uTwo);
    }
    dTwo--;
    w += sumOfN(h)-sumOfN(dTwo);
    if(w>uTwo) {
        w -= uTwo;
    } else {
        w = 0;
    }
    dOne--;
    w += sumOfN(dTwo)-sumOfN(dOne);
    if(w>uOne) {
        w -= uOne;
    } else {
        w = 0;
    }
    w += sumOfN(dOne);
    cout << w << "\n";
}

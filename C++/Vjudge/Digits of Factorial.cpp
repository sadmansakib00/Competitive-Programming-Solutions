#include <bits/stdc++.h>
#define lli long long int
using namespace std;
double anArr[1000001];
void countFacDig() {
    anArr[0] = log10(1);
    for(int m=1; m<1000001; m++)
        anArr[m] = anArr[m-1]+log10(m);
}
int main() {
    ios_base::sync_with_stdio(false);
    int test,num,base;
    lli temp;
    cin >> test;
    countFacDig();
    for(int m=1; m<=test; m++) {
        cin >> num >> base;
        if(num > 1)
            temp = ceil(anArr[num]/log10(base));
        else
            temp = 1;
        cout << "Case "<<m<<": "<<temp << "\n";
    }
}

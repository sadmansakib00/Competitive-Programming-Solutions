#include <iostream>
using namespace std;
int decToBin(int anInt) {
    int count(0);
    while(anInt>0) {
        if(anInt%2==1)
            ++count;
        anInt /= 2;
    }
    return count;
}
int main() {
    int tests; cin >> tests;
    for(int m=1; m<=tests; m++) {
        int x; cin >> x;
        cout << "Case "<<m<<": "<<(decToBin(x)%2==0 ? "even" : "odd")<<endl;
    }
}

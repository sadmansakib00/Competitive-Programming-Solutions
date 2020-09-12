#include <iostream>
using namespace std;
int reversed(int anInt) {
    int rev = 0;
    while(anInt != 0) {
        rev = (rev*10 + anInt%10);
        anInt = anInt/10;
    }
    return rev;
}
int main() {
    int tests; cin >> tests;
    while(tests-->0) {
        int x,y;
        cin >> x >> y;
        x = reversed(x);
        y = reversed(y);
        x = x+y;
        x = reversed(x);
        cout<<x<<endl;
    }
}

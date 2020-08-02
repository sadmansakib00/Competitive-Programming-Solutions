#include <iostream>
using namespace std;
int getRidOfZero(int m) {
    int power(1),sum(0);
    while(m>0) {
        int mod = m%10;
        m/=10;
        if(mod!=0) {
            sum += mod*power;
            power *= 10;
        }
    }
    return sum;
}
int main() {
    int a,b,c;
    while(cin>>a>>b) {
        c = a+b;
        a = getRidOfZero(a);
        b = getRidOfZero(b);
        c= getRidOfZero(c);
        cout<<(a+b==c ? "YES\n" : "NO\n");
    }
}

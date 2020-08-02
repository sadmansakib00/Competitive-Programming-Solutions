#include <iostream>
using namespace std;
int main() {
    int tests; cin>>tests;
    long long int a,b,c;
    for(int m=1; m<=tests; m++) {
        cin>>a>>b>>c;
        if((a+b)<=c || (a+c)<=b || (c+b)<=a || a<=0 || b<=0 || c<=0) {
            cout<<"Case "<<m<<": Invalid\n";
        } else {
            if((a==b && a!=c) || (b==c && b!=a) || (c==a && c != b))
                cout<<"Case "<<m<<": Isosceles\n";
            if(a==b && b==c)
                cout<<"Case "<<m<<": Equilateral\n";
            if(a!=b && b!=c && c!=a)
                cout<<"Case "<<m<<": Scalene\n";
        }
    }
}

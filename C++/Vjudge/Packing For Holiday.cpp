#include <iostream>
using namespace std;
int main() {
    int tests;
    cin >> tests;
    int x,y,z;
    for(int m=1; m<=tests; m++) {
        cin >> x;
        cin >> y;
        cin >> z;
        if(x<=20 && y<=20 && z<=20)
            cout<<"Case "<<m<<": Good\n";
        else
            cout<<"Case "<<m<<": Bad\n";
    }
}

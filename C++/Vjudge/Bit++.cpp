#include <iostream>
//#include <string>
using namespace std;
int main() {
    int test;
    cin >> test;
    int x = 0;
    while( test-- > 0) {
        string aStr;
        cin >> aStr;
        if(aStr.compare("++X")==0 || aStr.compare("X++")==0)
            x++;
        else
            --x;
    }
    cout << x;
}

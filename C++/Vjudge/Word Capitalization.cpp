#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string aStr;
    while(cin >> aStr) {
        aStr[0] = toupper(aStr[0]);
        cout<<aStr<<endl;
    }
}

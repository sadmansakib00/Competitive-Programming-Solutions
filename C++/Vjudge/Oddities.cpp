#include <iostream>
using namespace std;
int main() {
    int tests;
    cin>>tests;
    int value;
    while(tests>0) {
        cin >> value;
        if(value%2==0)
            cout<<value<<" is even\n";
        else
            cout<<value<<" is odd\n";
        --tests;
    }
}

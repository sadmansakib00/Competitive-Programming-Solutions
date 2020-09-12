#include <iostream>
using namespace std;
int main() {
    int amount;
    while(cin>>amount) {
        if(amount%2==0 && amount!=2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

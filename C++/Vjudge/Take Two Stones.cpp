#include <iostream>
using namespace std;
int main() {
    int stones;
    while(cin >> stones) {
    if(stones%2==0)
        cout<<"Bob\n";
    else
        cout<<"Alice\n";
    }
}

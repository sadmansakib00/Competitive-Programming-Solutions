#include <iostream>
using namespace std;
int main() {
    int tests;
    cin >> tests;
    for(int n=1; n<=tests; n++) {
        int amount;
        cin >> amount;
        int anArr[amount];
        for(int m=0; m<amount; m++)
            cin >> anArr[m];
        cout<<"Case "<<n<<": "<<anArr[amount/2]<<endl;
    }
}

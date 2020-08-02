#include <iostream>
using namespace std;
int main() {
    int tests;
    cin >> tests;
    for(int m=1; m<=tests; m++) {
        int amount;
        cin >> amount;
        int total=0;
        int x=0;
        for(int n=0; n<amount; n++) {
            cin>>x;
            if(x>=0)
                total+=x;
        }
        cout<<"Case "<<m<<": "<<total<<endl;
    }
}

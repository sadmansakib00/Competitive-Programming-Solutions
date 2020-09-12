#include <iostream>
using namespace std;
int main() {
    int tests; cin >> tests;
    while(tests>0) {
        int m; cin >> m;
        if(m>10)
            cout<<10<<" "<<m-10<<endl;
        else
            cout<<m<<" "<<0<<endl;
        --tests;
    }
}

#include <iostream>

using namespace std;

int main() {
    int tests, steps, low, high, init, pos;
    cin >> tests;
    for(int m=1; m<=tests; m++) {
        low = high = pos = 0;
        cin >> steps;
        cin >> init;
        --steps;
        while(steps-- > 0) {
            cin >> pos;
            if(init>pos)
                high++;
            else if(init<pos)
                low++;
            init=pos;
        }
        cout<<"Case "<<m<<": "<<low<<" "<<high<<endl;
    }
}

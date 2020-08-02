#include <iostream>
using namespace std;
int main() {
    string aStr;
    int count;
    while(cin >> aStr) {
        count = 1;
        for(int m=0; m<aStr.length(); m++) {
            if(aStr[m]<97)
                ++count;
        }
        cout << count<<endl;
    }
}

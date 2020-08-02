#include <iostream>
using namespace std;
int* aFunction() {
    int* anArr = new int[5];
    anArr[2] = 234;
    anArr[4] = 53;
    return anArr;
}
int main() {
    int* anArr = aFunction();
    int len = sizeof(anArr)/sizeof(*anArr);
    cout << anArr.size() << endl;
    cout << len << endl;
    for(int m=0; m<5; m++) {
        cout << anArr[m] << "\n";
    }
}

#include <iostream>
using namespace std;
int main() {
    int tests,inputOne(0),inputTwo(0);
    bool flag = false;
    bool flagTwo = false;
    cin>>tests;
    cout<<"Lumberjacks:\n";
    while(tests-- > 0) {
        flag = true;
        flagTwo = false;
        cin >> inputOne;
        cin >> inputTwo;
        if(inputOne<=inputTwo)
            flagTwo = true;
        inputOne = inputTwo;
        for(int m=1; m<9; m++) {
            cin >> inputTwo;
            if(flag && !(inputOne<=inputTwo) && flagTwo)
                flag = false;
            else if(flag && !(inputOne>=inputTwo) && !flagTwo)
                flag = false;
            inputOne = inputTwo;
        }
        if(flag)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

void printReverse(string aNum) {
    int len = aNum.length();
    for(int m=len-1; m>=0; m--)
        cout<<aNum[m];
}
int main() {
    string input;
    cin >> input;
    cout << input;
    printReverse(input);
    cout<<endl;
}

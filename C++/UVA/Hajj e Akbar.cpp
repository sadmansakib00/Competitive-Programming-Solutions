#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string aStr; int caseNo = 1;
    cin >> aStr;
    while(aStr != "*") {
        if(aStr == "Hajj")
            cout << "Case " << caseNo << ": Hajj-e-Akbar\n";
        else
            cout << "Case " << caseNo << ": Hajj-e-Asghar\n";
        cin >> aStr;
        ++caseNo;
    }
}

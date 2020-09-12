#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cin >> rows >> columns;
    for(int rowCount=0; rowCount<rows; rowCount++) {
        for(int colCount=0; colCount<columns; colCount++)
            cout<<"..O..";
        cout<<endl;
        for(int colCount=0; colCount<columns; colCount++)
            cout<<"O.o.O";
        cout<<endl;
        for(int colCount=0; colCount<columns; colCount++)
            cout<<"..O..";
        cout<<endl;
    }
}

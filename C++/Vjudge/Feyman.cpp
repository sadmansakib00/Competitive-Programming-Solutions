#include <iostream>
using namespace std;
int feymanSquare(int anInt)
{
    if(anInt==1)
        return 1;
    return anInt*anInt+feymanSquare(anInt-1);
}
int main()
{
    int tests;
    cin>>tests;
    while(tests!=0)
    {
        cout<<feymanSquare(tests)<<endl;
        cin>>tests;
    }
}

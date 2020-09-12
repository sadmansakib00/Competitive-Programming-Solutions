#include <iostream>
using namespace std;
int count(int m)
{
    if(m==1)
        return 0;
    return m-1+count(m-1);
}
int main()
{
    int tests;
    cin >> tests;
    int input;
    while(tests>0)
    {
        cin>>input;
        input = count(input);
        cout<<input<<endl;
        --tests;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int tests,temp1(0),temp2(0);
    cin >> tests;
    bool flag = false;
    while(tests-- > 0)
    {
        cin>>temp2;
        if(temp2-temp1>15)
        {
            temp1+=15;
            flag = true;
            break;
        }
        temp1=temp2;
    }
    if(!flag)
    {
        if(temp1>=85)
            temp1=90;
        else {
            temp1+=15;
            if(temp1>90)
                temp1=90;
        }
    }
    cout<<temp1<<endl;
}

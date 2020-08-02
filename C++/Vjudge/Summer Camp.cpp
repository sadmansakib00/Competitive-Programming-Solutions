#include <iostream>
using namespace std;

int main()
{
    int input,total(0),marker(0);
    cin >> input;
    for(int m=1; true; m++)
    {
        if(input-total>3)
        {
            if(m<10)
                total+=1;
            else if(m<100)
                total+=2;
            else if(total<1000)
                total+=3;
        }
        else
        {
            int temp = m;
            int tempDiv = 1;
            int digit = 0;
            while(temp>0) {
                temp /= 10;
                tempDiv *= 10;
                ++digit;
            }
            tempDiv /= 10;
            temp = m;
            while(digit-- > 0) {
                marker=temp/tempDiv;
                temp %= tempDiv;
                tempDiv /= 10;
                if(++total == input)
                    break;
            }
        }
        if(total==input)
            break;
    }
    cout<<marker<<endl;
}

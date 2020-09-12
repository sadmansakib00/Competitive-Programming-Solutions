#include <iostream>
using namespace std;
int main()
{
    int x,sum;
    while(cin>>x)
    {
        if(x<=10000)
        {
            sum = 0;
            if(x<=0)
            {
                for(int m=x; m<=1; m++)
                    sum+=m;
            }
            else
            {
                for(int m=x; m>=1; m--)
                    sum+=m;
            }
            cout<<sum<<endl;
        }
    }
}

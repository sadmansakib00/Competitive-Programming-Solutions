#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin>>len;
    int evenArr[len] {0};
    int oddArr[len] {0};
    int even(0),odd(0),temp(0);
    for(int m=0; m<len; m++)
    {
        cin>>temp;
        if(temp%2==0)
        {
            ++even;
            evenArr[m]=temp;
        }
        else
        {
            ++odd;
            oddArr[m]=temp;
        }
    }
    if(even==odd || even==odd-1 || odd==even-1)
    {
        cout<<0<<endl;
        exit(0);
    }
    sort(evenArr,evenArr+len,greater<int>());
    sort(oddArr,oddArr+len,greater<int>());
    int sum = 0;
    if(max(even,odd)>odd)
    {
        temp = even-odd-1;
        for(int m=len-odd-1,n=0; n<temp; m--,n++)
            sum+=evenArr[m];
    }
    else
    {
        temp = odd-even-1;
        for(int m=len-even-1,n=0; n<temp; m--,n++)
            sum+=oddArr[m];
    }
    cout << sum << endl;
}

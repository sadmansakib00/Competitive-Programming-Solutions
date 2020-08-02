#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string aStr;
    while(cin>>aStr)
    {
        bool flag[27] {false};
        int len = aStr.length();
        for(int m=0; m<len; m++)
        {
            int temp = toupper(aStr[m]);
            flag[temp-64]=true;
        }
        len=0;
        for(int m=1; m<27; m++)
            if(flag[m])
                len++;
        if(len%2==0)
            cout<<"CHAT WITH HER!"<<endl;
        else
            cout<<"IGNORE HIM!"<<endl;
    }
}

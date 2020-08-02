#include <iostream>
using namespace std;

int main()
{
    int len;
    while(cin >> len)
    {
        int anArr[len];
        for(int m=0; m<len; m++)
            cin >> anArr[m];
        bool flag[len] {0};
        for(int m=0; m<len-1; m++) {
            flag[abs(anArr[m+1]-anArr[m])] = true;
        }
        bool marker = true;
        for(int m=1; m<len; m++) {
            if(!flag[m]) {
                marker = false;
                break;
            }
        }
        if(len == 1)
        	marker = true;
        if(marker)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}

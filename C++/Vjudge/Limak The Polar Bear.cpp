#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numOfBalls,counter(0);
    cin >> numOfBalls;
    int sizeOfBalls[numOfBalls];
    for(int m=0; m<numOfBalls; m++)
        cin >> sizeOfBalls[m];
    sort(sizeOfBalls, sizeOfBalls+numOfBalls);
    for(int m=0; m<numOfBalls-1; m++) {
        if(sizeOfBalls[m+1]-sizeOfBalls[m]<2
           && sizeOfBalls[m+1]-sizeOfBalls[m]>0)
            counter++;
        else if(sizeOfBalls[m+1]-sizeOfBalls[m]>=2)
            counter = 0;
        if(counter==2)
            break;
    }
    if(counter==2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

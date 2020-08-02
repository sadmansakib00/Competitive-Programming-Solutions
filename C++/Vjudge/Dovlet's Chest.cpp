#include <bits/stdc++.h>
using namespace std;

segmentCount(int num) {
    int total=0;
    int temp=0;
    while(num>0) {
        temp = num%10;
        num /= 10;
        if(temp==0)
            total+=6;
        else if(temp==1)
            total+=2;
        else if(temp==2)
            total+=5;
        else if(temp==3)
            total+=5;
        else if(temp==4)
            total+=4;
        else if(temp==5)
            total+=5;
        else if(temp==6)
            total+=6;
        else if(temp==7)
            total+=3;
        else if(temp==8)
            total+=7;
        else if(temp==9)
            total+=6;
    }
    return total;
}

int main() {
    int a,b,total(0);
    cin >> a >> b;
    for(int m=a; m<=b; m++) {
        total += segmentCount(m);
    }
    cout<<total<<endl;
}

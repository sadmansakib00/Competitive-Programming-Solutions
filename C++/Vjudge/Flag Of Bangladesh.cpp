#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    double redPortion,greenPortion,radius,length;
    if(tests<=100)
    {
        while(tests>0)
        {
            cin >> length;
            if(length<=1000)
            {
                radius = (double)length/5;
                redPortion = acos((double)-1)*radius*radius;
                greenPortion = length*(length*6/10)-redPortion;
                printf("%.2f %.2f\n",redPortion,greenPortion);
            }
            --tests;
        }
    }
}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumOfAscii(string aStr) {
    int len = aStr.length();
    int count=0;
    int temp=0;
    for(int m=0; m<len; m++) {
        temp = (int)toupper(aStr[m]);
        if(temp>64 && temp<91) {
            count += temp-64;
        }
    }
    return count;
}
int sum(int anInt) {
    int count = 0;
    int div = 10;
    while(anInt>0) {
        count+=anInt%div;
        anInt /= 10;
    }
    return count;
}

int main() {
    string strOne, strTwo;
    int sumOne(0), sumTwo(0);
    double result = 0;
    while(getline(cin,strOne)) {
        getline(cin,strTwo);
        sumOne = sumOfAscii(strOne);
        sumTwo = sumOfAscii(strTwo);
        while(sumOne>9)
            sumOne = sum(sumOne);
        while(sumTwo>9)
            sumTwo = sum(sumTwo);
        result = 100*(sumOne<sumTwo ? (double)sumOne/sumTwo : (double)sumTwo/sumOne);
        printf("%.2f %%\n",result);
    }
}

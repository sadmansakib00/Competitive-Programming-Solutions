#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int chap;
    cin >> chap;
    int readTime[chap];
    long long leftTime;
    cin >> leftTime;
    for(int m=0; m<chap; m++)
        cin>>readTime[m];
    sort(readTime, readTime+chap);
    long totalTime=0;
    int x = 0;
    for(int m=0; m<chap; m++) {
        totalTime+=readTime[m];
        if(totalTime>leftTime) {
            totalTime -= readTime[m];
            break;
        }
        ++x;
    }
    cout << x << endl;
}

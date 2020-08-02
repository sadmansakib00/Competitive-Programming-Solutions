#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tests;
    cin >> tests;
    for(int m=0; m<tests; m++) {
        int x;
        cin>>x;
        int anArr[x];
        for(int n=0; n<x; n++)
            cin>>anArr[n];
        sort(anArr,anArr+x);
        int sum=0;
        for(int n=0; n<x; n++) {
            if(n>0)
                sum+=anArr[n]-anArr[n-1];
        }
        cout << sum*2 << endl;
    }
}

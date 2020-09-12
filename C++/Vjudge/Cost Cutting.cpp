#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int x[3];
    int test; cin>>test;
    for(int m=1; m<=test; m++) {
        cin>>x[0];
        cin>>x[1];
        cin>>x[2];
        sort(x,x+3);
        cout<<"Case "<<m<<": "<<x[1]<<endl;
    }
}

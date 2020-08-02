#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int length;
    cin>>length;
    while(length != 0) {
        int x[length];
        for(int m=0; m<length; m++)
            cin>>x[m];
        sort(x,x+length);
        for(int m=0; m<length; m++) {
            if(m>0)
                cout<<" ";
            cout<<x[m];
        }
        cout<<endl;
        cin>>length;
    }
}

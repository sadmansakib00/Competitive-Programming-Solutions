#include <iostream>
using namespace std;
int main() {
    int anInt;
    while(cin>>anInt) {
        bool flag = false;
        while(anInt>0) {
            if(anInt%10==1)
                anInt/=10;
            else if(anInt%100==14)
                anInt/=100;
            else if(anInt%1000==144)
                anInt/=100;
            else {
                flag = true;
                cout<<"NO"<<endl;
                break;
            }
        }
    if(!flag)
        cout<<"YES"<<endl;

    }
}

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int tests; cin>>tests;
    int anInt,temp,count;
    for(int m=1; m<=tests; m++) {
        cin>>anInt;
        temp = sqrt(anInt)+1;
        cout<<"Case #"<<m<<": "<<anInt<<" = ";
        count = 0;
        for(int n=2; n<temp; n++) {
            if(anInt%n==0) {
                ++count;
                cout<<n<<" * "<<anInt/n;
                if(count == 1)
                    cout<<" = ";
            }
            if(count>=2)
                break;
        }
        cout << endl;
    }
}

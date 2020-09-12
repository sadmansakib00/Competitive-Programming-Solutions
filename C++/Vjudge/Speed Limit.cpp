#include <iostream>
using namespace std;
int main() {
    int tests;
    cin>>tests;
    long long int total,temp,time,speed;
    while(tests!=-1) {
        total=0;
        for(int m=1; m<=tests; m++) {
            cin>>speed>>time;
            if(m==1)
                total = speed*time;
            else
                total += speed*(time-temp);
            temp = time;
        }
        cout << total << " miles\n";
        cin>>tests;
    }
}

#include <iostream>
#include <math.h>
using namespace std;

bool composites[1000000]{0};
int generateComposites() {
    int len = sizeof(composites);
    int val = sqrt(len)+1;
    for(int m=2; m<val; m++) {
        if(!composites[m]) {
            for(int n=m; n*m<=len; n++)
                composites[n*m]=1;
        }
    }
}
int main() {
    generateComposites();
    int input;
    cin >> input;
    for(int m=4; m<500001; m++) {
        if(input-m<0)
            break;
        if(composites[m] && composites[input-m]) {
            cout<<m<<" "<<input-m<<endl;
            break;
        }
    }
}

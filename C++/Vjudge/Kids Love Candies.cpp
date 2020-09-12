#include <iostream>
using namespace std;
int main() {
    int tests,options,minVal,total,temp;
    cin>>tests;
    while(tests>0) {
        total = 0;
        cin>>options;
        cin>>minVal;
        for(int m=0; m<options; m++) {
            cin>>temp;
            total+=temp/minVal;
        }
        cout<<total<<endl;
        --tests;
    }
}

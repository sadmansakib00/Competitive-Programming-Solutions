#include <iostream>
using namespace std;

void countTheBees(long long int num,long long int male,long long int female, long long int total) {
    if(num<1) {
        cout<<male<<" "<<total+1<<endl;
        return;
    }
    return countTheBees(num-1, 1+male+female, male, 1+2*male+female);
}
int main() {
    long long int tests(0);
    cin >> tests;
    while(tests != -1) {
        countTheBees(tests,0,0,0);
        cin >> tests;
    }
}

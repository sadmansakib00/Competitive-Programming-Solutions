#include <iostream>
using namespace std;
int main() {
    long long int x,y;
    while(cin>>x) {
        cin>>y;
        cout<<std::max(x,y)-std::min(x,y)<<endl;
    }
}

#include <iostream>
using namespace std;
int main() {
    int x,y;
    while(cin>>x>>y) {
        cout<<x+y-1-x<<" "<<x+y-1-y<<endl;
    }
}

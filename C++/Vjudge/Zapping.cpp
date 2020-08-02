#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x;
	cin>>y;
	while(x!=-1 && y!=-1) {
	if((y-x)>=50)
		cout<<100-(y-x)<<endl;
	else if((y-x)<=-50)
		cout<<100-x+y<<endl;
	else if((y-x)<0 && (y-x)>-50)
		cout<<x-y<<endl;
	else
		cout<<y-x<<endl;

	cin>>x;
	cin>>y;
	}
}

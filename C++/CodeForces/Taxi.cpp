#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,mems,ones=0,twos=0,threes=0,total=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> mems;
		if(mems == 4) {
			total++;
		} else if(mems==3) {
			threes++;
		} else if(mems==2) {
			twos++;
		} else {
			ones++;
		}
	}
	ones -= min(threes,ones);
	if(twos%2==0) {
		twos /= 2;
	} else {
		twos = twos/2 + 1;
		ones -= 2;
	}
	total += threes+twos+ceil(ones/4.0);
	cout << total << "\n";
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,m,a;
	cin >> n >> m >> a;
	n = ceil(n/(double)a);
	m = ceil(m/(double)a);
	cout << n*m << "\n";
}
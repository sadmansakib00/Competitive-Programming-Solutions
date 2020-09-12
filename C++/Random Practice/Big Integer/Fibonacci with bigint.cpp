// C++ implementation to generate large
// number of fibonacci series using the
// boost multiprecision library
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using big_int = boost::multiprecision::cpp_int;
using namespace std;

// function to generate first n
// fibonacci numbers
int fib(unsigned int n)
{
	// seed values
	// 0th and 1st number of the
	// series are 0 and 1
	big_int a = 0;
	big_int b = 1;
	cout << "Term 1 is : " << a << endl;
	cout << "Term 2 is : " << b << endl;

	for (unsigned int i = 2; i < n; ++i)
	{
		const big_int c = a + b;
		cout << "Term "<< i + 1 << " is : " << c << endl;
		a = b;
		b = c;
	}
}

// Driver code
int main()
{
	unsigned int n = 500;

	// function calling
	fib(n);

	return 0;
}

#include <iostream>
using namespace std;

void aFunction(int anArr[], int size) {
	for(int i=0; i<size; i++) {
		anArr[i] = (i+1)*3;
	}
}

int main() {
	int anArr[10];
	aFunction(anArr,10);
	for(int i=0; i<10; i++) {
        cout << anArr[i] << "  ";
	}
}

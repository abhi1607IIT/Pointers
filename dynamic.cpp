#include <iostream>
using namespace std;

void temp2() {
	int* p = new int;
	cout << p << endl;
	delete p;
	//p = 0;
	*p = 10;
	cout << p << endl;
}


void temp() {
	int i;
	int *p = new int;
}

int main() {
	temp2();
	/*
	while (true) {
		int *p = new int;
		*p = 10;
		cout << *p << endl;
		delete p;
	}
*/

	temp();
	int * p = new int;
	double * pd = new double;
	delete p;
	delete pd;

	int n;
	cin >> n;

	int * parr = new int[n];
  for (int i = 0; i < n; i++) {
		cin >> parr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << parr[i] << endl;
	}
  delete [] parr;	
}


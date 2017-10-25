#include <iostream>
using namespace std;

void print(const int * a) {
	//*a = 1;
	cout << *a << endl;
}

int main() {

	int ri = 10;
	const int& rj = ri;
	ri++;
	rj++;


	int i11 = 10;
	print(&i11);

	int * const p15 = &i11;
	(*p15)++;

	int i12;
	p15 = &i12;

	int const * const p16 = &i11;


	int const * p12 = &i11;

	int* p13 = p12;

	(*p13)++;

	int* p14 = &i11;

	int const ci2 = 10;
	int const * p1 = &ci2;

	//(*p1)++;
	//ci2++;


	int const ci = 10;
	const int cii = 100;

	int i1 = 100;

	int const * p = &i1;
	//(*p)++;
	i1++;

	int * const p2 = &i1;


	int i = 10;
	i  = 11;

	int k = 100;

	int &j = i;
	j = k;

	// illegalconst int j;
	//j = j + 10;
}


#include <iostream>
using namespace std;

int main() {
	int i = 10;
	int* p = &i;
	int** p2 = &p;

	int j = i;//*p1;//**p2;
	i++;
	cout << j << endl;
}


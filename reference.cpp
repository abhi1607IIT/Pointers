#include <iostream>
using namespace std;

void increment(int x) {
	x++;
}

void increment2(int* & p) {
	int j = 1;
	p = &j;
	*p = 11;
}

int& temp2() {
	int i = 10;
	return i;
}

int* temp() {
	int i = 10;
	return &i;
}

void increment1(int& x) {
	x++;
}

int main() {
	int & abc = temp2();
	int* ans = temp();
	cout << *ans << endl;

	int i = 10;
	int*p = &i;
	increment2(p);
	cout << i << endl;
	cout << *p << endl;
	
	int &j = i;

	i++;
	cout << j << endl;
	increment(i);
	cout << i << endl;
	increment1(i);
	cout << i << endl;
}


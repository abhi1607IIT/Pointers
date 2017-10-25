#include <iostream>
using namespace std;

bool abc(int a) {
	cout << a << endl;
}

int abc(char a) {
	cout << a << endl;
}


int  ab[]= {1,2,3};
bool has7(int* a = ab, int size = 10, int startIndex = 0) {
	if (startIndex == size) {
		return false;
	}
	if (a[startIndex] == 7) {
		return true;
	}

	return has7(a, size, startIndex + 1);
}

/*
bool has7(int a[], int size) {
	return has7(a, size , 0);
}
*/
inline int max(int x, int y) {
	return (x > y)? x : y;
}

int main() {

	int a[] = {1,2,3,4};
	has7(a, 4);
	int a;
	int b;

	int c;
	c = max(a, b);
	//c = (a > b)? a : b;
/*	if (a > b) {
		c = a;
	} else {
		c = b;
	}
	*/
	abc('a');
}


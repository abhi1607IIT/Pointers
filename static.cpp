#include <iostream>
using namespace std;

int sum(int a[], int size) {
	static int startIndex = 0;
	if (startIndex == size) {
		startIndex = 0;
		return 0;
	}
	int ans = a[startIndex];
	startIndex++;
	return ans + sum(a, size);
}

int sum(int a[], int size, int startIndex) {
	if (startIndex == size) {
		return 0;
	}
	return a[startIndex] + sum(a, size, startIndex + 1);
}

int temp() {
	static int i = 0;
	int j = 10;
	i++;
	cout << &i << endl;
	cout << i << endl;
}

int main() {
	int a[] = {1,2,3,4};
	int b[] = {3,4,5};
	int a1 = sum(a, 4);
	int b1 = sum(b, 3);
	temp();
	int k;
	temp();
	int l;
	temp();
}


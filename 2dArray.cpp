#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int** arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[i+1];
	}

	cin >> arr[3][2];
	for (int i = 0; i < n; i++) {
		delete [] arr[i];
	}
	delete [] arr;



}


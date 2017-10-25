#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int element) {
	if (size == 0) {
		return -1;
	}
	int mid = size/2;
	if (a[mid] == element) {
		return mid;
	} else if (a[mid] > element) {
		return binarySearch(a, size/2, element);
	} else {
		int ans = binarySearch(a + mid + 1, size - size/2 - 1, element);
		if (ans == -1)
			return -1;

		return ans + mid + 1;
	}
}

int sum2(int * a, int size) {
	if (size == 0) {
		return 0;
	}
	return a[0] + sum2(a + 1, size - 1);
}

int sum1(int a[], int size) {
	int ans = 0;
	int i = 0;
	while (i < size) {
		ans = ans + *(a + i);
		i++;
	}
	return ans;
}

int sum(int a[], int size) {
	if (size == 0) {
		return 0;
	}
	return a[0] + sum(a + 1, size - 1);
}

int main() {
	char carr[] = "abc";
	// first the right side constant will be stored in temp memory
	// in the above case a new memory for our array is created
	// and text from temp memory is copied to our memory
	// so the final address in carr is of memory specialy created for us

	//in the second case pc2 just starts pointing towards this temp
	// memory
	char *pc2 = "abc";



	
	
	
	int arr[] = {1,2,3};

	cout << sizeof(arr) << endl;

	int *p;

	p = arr;
	cout << sizeof(p) << endl;
	
	int i = 0;
	p  = &i;
	// illegal arr = p;

	cout << arr << endl;
	cout << *arr << endl;
	cout << *(arr + 1) << endl;
	cout << *(arr + 2) << endl;



}


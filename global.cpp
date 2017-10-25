#include <iostream>
using namespace std;
int i = 15;

int main() {
	cout << i << endl;
	int i = 10;
	if (i == 10) {
		int i = 1;
		i = 12;
		cout << i << endl;
	}
	cout << i << endl;
}


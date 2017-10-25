#include <iostream>
using namespace std;

int main() {
	int i = 97;
	char c = 'a';
	int* p = &i;
	char* pc = &c;

	char carr[] = "abc";
	carr[1] = '\0';
	carr[2] = '\0';
	int * p2 = (int*) carr;
	cout << *p2 << endl;

	pc = (char*)p;
	cout << *pc << endl;
	cout << pc << endl;
	//p = (int *)pc;

	//c = i;
	//i = c;
}

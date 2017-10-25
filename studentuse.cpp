#include <iostream>
#include "student.cpp"
using namespace std;

int main() {
	char name[] = "abcd";
	student s(name);
	student s1(name);
	cout << s1.getName() << endl;

	s1 = s;

	student s6 = s;
	cout << s6.getName() << endl;
	cout << s.getName() << endl;
	s.name[0] = 'p';
	cout << s6.getName() << endl;
	cout << s.getName() << endl;

	student s3(s1);
	cout << s3.getName() << endl;
	s3.setRollNumber(100);
	cout << s3.getRollNumber() << endl;
	cout << s1.getRollNumber() << endl;
	cout << s.getRollNumber() << endl;
	student* sp = new student(name);

	(*sp).setRollNumber(10);
	sp->setRollNumber(1000);

	student s2(name);
	s.setRollNumber(100);
	cout << s.getRollNumber() << endl;
	name[3] = '\0';
	student s7(name);


	cout << s.getName() << endl;
	cout << s1.getName() << endl;
	cout << s2.getName() << endl;
	cout << s3.getName() << endl;
	cout << s7.getName() << endl;

	delete sp;
}


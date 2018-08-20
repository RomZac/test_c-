#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class person {
protected:
	char name[40];
public:
	void getName() {
		cout << "Input name: ";
		cin >> name;
	}
	void putName() {
		cout << "Name: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};
//////////////////////////////////////////////////////////
class student : public person {
private:
	float gpa;
public:
	void getData() {
		person::getName();
		cout << "Average ball student : "; cin >> gpa;
	}
	bool isOutstanding() {
		return (gpa > 3.5) ? true : false;
	}
};
//////////////////////////////////////////////////////////
class professor : public person {
private:
	int numPubs;
public:
	void getData() {
		person::getName();
		cout << "Num publications: "; cin >> numPubs;
	}
	bool isOutstanding() {
		return (numPubs > 100) ? true : false;
	}
};
//////////////////////////////////////////////////////////
int main() {
	person* persPtr[100];
	int n = 0;
	char ch;

	do {
		cout << "Student (s) or Professor (p) :"; cin >> ch;
		(ch == 's') ? persPtr[n] = new student :  persPtr[n] = new professor;
		persPtr[n++]->getData();
		cout << " Input person? (y/n) ";
		cin >> ch;
	} while (ch == 'y');

	for (int i = 0; i < n; i++) {
		persPtr[i]->putName();
		if (persPtr[i]->isOutstanding())
			cout << "Happy man" << endl;
	}

	system("PAUSE");
	return 0;
}
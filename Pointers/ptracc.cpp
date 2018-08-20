#include <iostream>
using namespace std;

int main() {
/*
	int var1 = 11;
	int var2 = 22;

	int *ptr = &var1;
	cout << *ptr << endl;
	cout << ptr << endl;
	ptr = &var2;
	cout << *ptr << endl;
*/
	void cent(double *);
	int z = 0;
	int intarray[5] = { 11,22,23,33,44 };
	for (int i = 0; i < 5; i++)
		cout << *(intarray + i) << endl;

	char* str = "Input string";

	cout << str << endl;
	cout<< (str+=3) << endl;
	const int* ptr;
	ptr = &z;

	system("PAUSE");
	return 0;
}

void cent(double *v) {
	*v *= 2.54;
}

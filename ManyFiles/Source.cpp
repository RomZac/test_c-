#include "Verylong.h"


int main() {
	unsigned long numb, i;
	Verylong fact = 1;
	cout << "Input number : ";
	cin >> numb;
	for (i = numb; i > 0; i--) {
		fact = fact * i;
	}
	cout << "Factorial  " << numb << " = ";
	fact.putvl();
	cout << "d" << endl;
	system("PAUSE");
	return 0;
}
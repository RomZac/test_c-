#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int chcount = 0;
	int wdcount = 0;
	char ch = 'a';
	cout << "Input string: ";
	while (ch != '\r') {
		ch = _getche();
		if (ch == ' ')
			wdcount++;
		else
			chcount++;
	}
	cout << "\nWords: " << wdcount << endl;
	cout << "Letters: " << chcount - 1 << endl;
	system("PAUSE");
	return 0;
} 
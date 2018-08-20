#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	char *str;
public :
	String(char* s) {
		str = new char[strlen(s) + 1];
		strcpy(str,s);
	}
	~String() {
		cout << "Delete string\n";
		delete[] str;
	}
	void display() {
		cout << str << endl;
	}
};

int main() {
	String s1 = "Tishe.";
	cout << "s1 = ";
	s1.display();

	system("PAUSE");
	return 0;
}
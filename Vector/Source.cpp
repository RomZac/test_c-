#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	vector<string> st;
	string buffer = "";

	cout << "¬водить фамилии, в конце пуста€ строка" << endl;

	do {
		getline(cin, buffer);
		if (buffer.size() > 0)
			st.push_back(buffer);
	} while (buffer != "");

	unsigned int vector_size = st.size();
	cout << "Vector: \n";
	for (int i = 0; i < vector_size; i++)
		cout << st[i] << endl;

	system("PAUSE");
	return 0;

}
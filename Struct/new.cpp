#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX = 100;
int buff[MAX];

int main(){
	//int i = 0;
	//while (true) {
	//	cout << "Input ";
	//	//cin.unsetf(ios::skipws);
	//	cin >> i;
	//	if (cin.good()) {
	//		cin.ignore(10, '\n');
	//		break;
	//	}
	//	cin.clear();
	//	cout << "Error" << endl;
	//	cin.ignore(10, '\n');
	//}
	//cout << "Num " << i << endl;
/*
	char ch = 'x';
	int j = 77;
	double d = 6.02;
	string str1 = "Lolp    ";
	string str2 = "WAr";

	ofstream outfile("exit.txt");

	outfile << ch << " " << j << " " << d << " " << str1 << " " << str2 << endl;

	outfile.close();
	ifstream infile("exit.txt");
	
	infile >> ch >> j >> d >> str1 >> str2;
	cout << ch << "\n" << j << "\n " << d << " \n" << str1 << " \n" << str2 << endl;

	infile.close();
	*/
	
	for (int i = 0; i < MAX; i++)
		buff[i] = i;

	ofstream os("exit.txt", ios::binary);
	os.write(reinterpret_cast<char*>(buff), MAX*sizeof(int));
	os.close();

	for (int i = 0; i < MAX; i++)
		buff[i] = 0;
	
	ifstream is("exit.txt", ios::binary);
	is.read(reinterpret_cast<char*>(buff), MAX*sizeof(int));
	is.close();

	for (int i = 0;i < MAX; i++)
		if (buff[i] != i) {
			cerr << "Erorr data" << endl;
			break;
		}

	system("PAUSE");
	return 0;
}  
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
	int arr[] = { 2,4,6,8 };
	list<int> theList;
	list<int>::iterator iter;

	for (int i = 0; i < 4; i++)
		theList.push_back(arr[i]);

	for (iter = theList.begin();iter != theList.end(); iter++)
		cout << *iter << "\t";
	cout << endl;

	system("PAUSE");
	return 0;
}
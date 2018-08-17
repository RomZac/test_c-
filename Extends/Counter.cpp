#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////////
class Counter {
protected:
	unsigned int count;
public:
	Counter() : count(0) {}
	Counter(int c) : count(c) {}
	unsigned int get_count() const {
		return count;
	}
	Counter operator++() {
		return Counter(count++);
	}
};
///////////////////////////////////////////////////////////////
class CountDn : public Counter{
public :
	CountDn() : Counter() {}
	CountDn(int c) : Counter(c) {}
	Counter operator--() {
		return Counter(--count);
	}
};

int main() {
	CountDn c1(15);
	cout << "c1 = " << c1.get_count() << endl;
	++c1;
	cout << "c1 = " << c1.get_count() << endl;
	++c1;++c1;
	cout << "c1 = " << c1.get_count() << endl;
	--c1;
	cout << "c1 = " << c1.get_count() << endl;


	system("PAUSE");
	return NULL;
}
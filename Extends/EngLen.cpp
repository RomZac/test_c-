#include <iostream>
using namespace std;
enum posneg { pos, neg };
///////////////////////////////////////////////////////////////
class Distance {
protected:
	int feet;
	float inches;
public:
	Distance() :feet(0), inches(0) {}
	Distance(int ft, float in) : feet(ft), inches(in) {}

	void getdist() {
		cout << "\nInput feet: "; cin >> feet;
		cout << "Input inches: "; cin >> inches;
	}
	void showdist() const {
		cout << feet << "\'-" << inches << "\"" << endl;
	}
};
///////////////////////////////////////////////////////////////
class DistSign : public Distance {
private:
	posneg sign;
public:
	DistSign() : Distance() { sign = pos; }
	DistSign(int ft, float in, posneg sg = pos) : Distance(ft, in) {
		sign = sg;
	}
	void getDist() {
		Distance::getdist();
		char ch;
		cout << "Input sign (+ or -): "; cin >> ch;
		sign = (ch == '+') ? pos : neg;
	}
	void showDist() {
		cout << ((sign == pos) ? "(+)" : "(-)");
		Distance::showdist();
	}
};
///////////////////////////////////////////////////////////////

int main() {
	DistSign alpha;
	alpha.getDist();
	DistSign beta(11, 2.2);
	DistSign gamma(1, 0.5, neg);

	cout << "Alpha : ";alpha.showDist();
	cout << "Beta  : "; beta.showDist();
	cout << "Gamma : "; gamma.showDist();

	system("PAUSE");
	return 0;
}
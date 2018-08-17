#include <iostream>
using namespace std;

inline void intfrac(float, float&,  float& const);

int main() {
	float number, intpart, fracpart;
	do {
		cout << "Input frac number:";
		cin >> number;
		intfrac(number, intpart, fracpart);
		cout << "The integer part is : " << intpart << ", the fractional part is " << fracpart << endl;
	} while (number != 0.0);
	system("PAUSE");
	return 0;
}

void intfrac(float num, float& intp,  float& const fracp) {
	long tmp = static_cast<long>(num);
	intp = static_cast<float>(tmp);
	fracp = num - tmp;
} 
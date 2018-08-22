#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

const int SZ = 1000;

class Verylong {
private:
	char vlstr[SZ];
	int vlen;
	Verylong multdigit(const int) const;
	Verylong mult10(const Verylong) const;

public:
	Verylong() : vlen(0) {
		vlstr[0] = '\0';
	}
	Verylong(const char s[SZ]) {
		strcpy_s(vlstr, s);
		vlen = strlen(s);
	}
	Verylong(const unsigned long n) {
		_ltoa(n, vlstr, 10);
		strrev(vlstr);
		vlen = strlen(vlstr);
	}
	void putvl() const;
	void getvl();
	Verylong operator+(const Verylong);
	Verylong operator*(const Verylong);
};
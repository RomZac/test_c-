#include "Verylong.h"

Verylong Verylong::multdigit(const int d2) const {
	char temp[SZ];
	int i, carry = 0;
	for (i = 0; i < vlen; i++) {
		int d1 = vlstr[i] - '0';
		int digitprod = d1*d2;
		digitprod += carry;
		if (digitprod >= 10) {
			carry = digitprod / 10;
			digitprod -= carry * 10;
		}
		else
			carry = 0;
		temp[i] = digitprod + '0';
	}
	if (carry != 0)
		temp[i++] = carry + '0';
	temp[i++] = '\0';
	return Verylong(temp);
}

Verylong Verylong::mult10(const Verylong v ) const {
	char temp[SZ];
	for (int i = v.vlen - 1; i >= 0; i--)
		temp[i + 1] = v.vlstr[i];
	temp[0] = '0';
	temp[v.vlen + 1] = '\0';
	return Verylong(temp);
}

void Verylong::putvl() const {
	char temp[SZ];
	strcpy_s(temp, vlstr);
	cout << strrev(temp) << endl;
}

void Verylong::getvl() {
	cin >> vlstr;
	vlen = strlen(vlstr);
	strrev(vlstr);
}

Verylong Verylong::operator+(const Verylong v) {
	char temp[SZ];
	int i;
	int maxlen = (vlen > v.vlen) ? vlen : v.vlen;
	int carry = 0;
	for (i = 0; i < maxlen; i++) {
		int d1 = (i > vlen - 1) ? 0 : vlstr[i] - '0';
		int d2 = (i > v.vlen - 1) ? 0 : v.vlstr[i] - '0';
		int digitsum = d1 + d2 + carry;
		if (digitsum >= 10) {
			digitsum -= 10;
			carry = 1;
		}
		else
			carry = 0;
		temp[i] = digitsum + '0';
	}
	if (carry == 1)
		temp[i++] = '1';
	temp[i] = '\0';
	return Verylong(temp);
}

Verylong Verylong::operator*(const Verylong v) {
	Verylong pprod;
	Verylong tempsum;
	for (int i = 0;i < v.vlen;i++) {
		int digit = v.vlstr[i] - '0';
		pprod = multdigit(digit);
		for (int j = 0; j < i; j++)
			pprod = mult10(pprod);
		tempsum = tempsum + pprod;
	}
	return tempsum;
}

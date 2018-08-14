#include <iostream>
using namespace std;

class part {
private:
	int modelnumber;
	int partnumber;
	float cost;
public:
	void setpart(int nm, int pn, float c) {
		modelnumber = nm;
		partnumber = pn;
		cost = c;
	}
	void showpart() {
		cout << "Model is " << modelnumber << ", detail is " << partnumber << "\ncost : " << cost << endl;
	}
};

int main() {
	part s2;
	
	s2.setpart(444, 777, 50);
	s2.showpart();

	system("PAUSE");
	return 0;
}
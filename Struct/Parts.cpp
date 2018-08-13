#include <iostream>
using namespace std;

struct part {
	int modelnumber;
	int partnumber;
	float cost;
};

int main() {
	part part1 = {111, 222, 235.2};	
	/*
	part1.modelnumber = 1111;
	part1.partnumber = 444;
	part1.cost = 0.22221;
	*/
	cout << "Model " << part1.modelnumber << ", detail " << part1.partnumber << endl;
	cout << "Detail price $$ " << part1.cost << endl;
	part part2 = part1;
	cout << "Model " << part2.modelnumber << ", detail " << part2.partnumber << endl;
	cout << "Detail price $$ " << part2.cost << endl;
	system("PAUSE");
	return 0;
}
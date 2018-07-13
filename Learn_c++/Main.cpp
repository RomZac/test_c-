#include <iostream>
#include "Students.h"
#include <string>

using namespace std;

int main() {
	Students *st = new Students("joker", "Fisher");

	//string name;
	//string last_name;
	//cout << "Name:";
	//getline(cin, name);
	//cout << "LAst name:";
	//getline(cin, last_name);
	//st->set_name(name);
	//st->set_last_name(last_name);

	int scores[5];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	st->set_scores(scores);
	float average_ball = sum / 5.0;
	st->set_average_ball(average_ball);

	cout << "Avg ball for " << st->get_name() << " " << st->get_last_name() << " is "
		<< st->get_average_ball() << endl;
	

	system("PAUSE");
	delete st;
	return 0;
}
#include <iostream>
#include <vector>

#include "human.h"
#include "teacher.h"
#include "student.h"

using namespace std;

int main(int argc, char * argv[]) {

	vector<int> scores;
	scores.push_back(2);
	scores.push_back(3);
	scores.push_back(2);
	scores.push_back(1);
	scores.push_back(9);


	student *st = new student("Jok", "Kit", "Sec", scores);
	teacher *teach = new teacher("Jok", "K", "S", 40);

	cout << st->get_full_name() << endl;
	cout << "Avg score : " << st->get_average_score() << endl;

	cout << teach->get_full_name() << endl;
	cout << "Work time : " << teach->get_work_time() << endl;

	system("PAUSE");
	return 0;
}
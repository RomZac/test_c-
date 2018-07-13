#include <iostream>
#include "Students.h"
#include <fstream>
using namespace std;

Students::Students(int default_score) {
	for (int i = 0;i < 5;i++)
		scores[i] = default_score;
}

Students::Students(std::string name, std::string last_name){
	Students::set_name( name);
	Students::set_last_name(last_name);
};

Students::~Students() {
	Students::save();
};

void Students::set_name(string st_name) {
	Students::name = st_name;
}

string Students::get_name() {
	return Students::name;
}

void Students::set_last_name(string st_last_name) {
	Students::last_name = st_last_name;
}

string Students::get_last_name() {
	return Students::last_name;
}

void Students::set_scores(int st_scores[]) {
	for (int i = 0;i < 5;i++)
		Students::scores[i] = st_scores[i];
}

void Students::set_average_ball(float ball) {
	Students::average_ball = ball;
}

float Students::get_average_ball() {
	return Students::average_ball;
}

void Students::save() {
	ofstream fout("Z:\\C++\\Learn_c++\\Learn_c++\\students.txt", ios::app);

	fout << Students::get_name() << " " << Students::get_last_name() << " ";
	for (int i = 0; i < 5; i++) {
		fout << Students::scores[i] << " ";
	}

	fout << endl;
	fout.close();
}
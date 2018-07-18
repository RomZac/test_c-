#pragma once
#include <iostream>
#include <string>

class Students {

public:

	Students(int);
	Students(std::string, std::string);

	~Students();

	void set_name(std::string);
	std::string get_name();
	void set_last_name(std::string);
	std::string get_last_name();
	void set_scores(int st_scores[]);
	void set_average_ball(float);
	float get_average_ball();
	void save();

private:
	float average_ball;
	std::string name;
	std::string last_name;
	int scores[5];
};
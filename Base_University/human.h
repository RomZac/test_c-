#pragma once

#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED

#include <string>
#include <sstream>

class human {
public:
	human(std::string name, std::string last_name, std::string second_name) {
		this->name = name;
		this->last_name = last_name;
		this->second_name = second_name;
	}

	std::string get_full_name() {
		std::ostringstream full_name;
		full_name << this->last_name << " " << this->name << " " << this->second_name;
		return full_name.str();
	}

private:
	std::string name;
	std::string last_name;
	std::string second_name;
};

#endif
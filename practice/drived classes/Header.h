#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
//NOt a perfect design but its all for practice purposes for drived classes
class info {
	//Note: never give protected to data member will can lead to security hole, so never do that!
	char Name[10];
	int Roll_num;
	int Class;
protected:
	void printINFO(std::ostream& os = std::cout) {
		os << "Name   : " << Name << std::endl;
		os << "Number : " << Roll_num << std::endl;
		os << "Class  : " << Class << std::endl;
	}
public:
	void setname(const char* name) { strcpy(Name, name); }

	void setNum(int num) { Roll_num = num; }

	void setClass(int class_) { Class = class_; }
};

class Student : public info {
public:
	Student(const char* name, int num, int class_) {
		setname(name);
		setNum(num);
		setClass(class_);
	}
	void print(std::ostream& os = std::cout) { this->printINFO(os); }
};
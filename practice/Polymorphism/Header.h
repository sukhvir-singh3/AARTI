#include <iostream>
#pragma once
class Students {
	int number;
public:
	Students() { number = 0; };
	Students(int num) {
		number = num;
	}
	void printName() const{
		std::cout << "Student ID = " << number;
	}
};
class Teacher : public Students {
	int Id;
public:
	Teacher(int num) {
		Id = num;
	}
	void printName() const	{
		std::cout << "Teacher ID = " << Id << std::endl;
	}
	Teacher(int tid, int sid) : Students(sid) {
		Id = tid;
	}
};

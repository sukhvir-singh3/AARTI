#pragma once
class Students {
	int number;
public:
	Students() { number = 0; };

	Students(int num): number(num) {} //here's what i have learned!

	void printName() const {
		std::cout << "Student ID = " << number;
	}
};

#pragma once
#include <iostream>
class Students {
	int number;
public:
	Students() { number = 0; };
	Students(int num) {
		number = num;
	}
	virtual void printName() const = 0;
};
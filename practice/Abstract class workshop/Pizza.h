#pragma once
#include "iFood.h"
class Pizza: public iFood {
	double diameter = 0;
	int slices = 0;
	int remaning = 0;
public:
	Pizza(double, int);
	 int portions()	const;
	 void consume();
	 int remaining() const;
	 void display() const;
};

const int MAX_NUM = 40;
class DeluxePizza : public iFood {
	char topping[MAX_NUM];
	double size;
	int slices;
	int remaning;
public:
	DeluxePizza();
	DeluxePizza(double, int, const char*);
	 int portions()	const;
	 void consume();
	 int remaining() const;
	 void display() const;
};
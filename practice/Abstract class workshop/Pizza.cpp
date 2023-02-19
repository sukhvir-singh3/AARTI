#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Pizza.h"

Pizza::Pizza(double dia , int num )
{
	diameter = dia;
	slices = num;
	remaning = slices;
}

int Pizza::portions() const
{
	return remaning;
}

void Pizza::consume()
{
	remaning  = remaning - 1;

}

int Pizza::remaining() const
{
	return remaning;
}

void Pizza::display() const
{
	std::cout << diameter << "'' " << slices<< " slices " << remaning << " remaning" << std::endl;
}

DeluxePizza::DeluxePizza()
{
	topping[0] = '/0';
	size = 0;
	slices = 0;
	remaning = 0;
}

DeluxePizza::DeluxePizza(double size_, int slices_, const char* topping_)
{
	size = size_;
	slices = slices_;
	remaning = slices;
	strcpy(topping, topping_);
}

int DeluxePizza::portions() const
{
	return size;
}

void DeluxePizza::consume()
{
	remaning = remaning - 1;
}

int DeluxePizza::remaining() const
{
	return remaning;
}

void DeluxePizza::display() const
{
	std::cout << size << "'' " << slices << " slices " << remaning << " remaning" << std::endl;
	std::cout << "- "<<topping;
}

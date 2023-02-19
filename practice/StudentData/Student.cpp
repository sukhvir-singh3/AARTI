#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <iostream>
#include <cstring>
namespace sdds {
	Person::Person(){
		Name[0] = '/0';
	}
	void Person::set(const char* name){
		strcpy(Name, name);
	}
	void Person::display(std::ostream& os) const{
		os << "Name : " << Name << std::endl;
	}
}
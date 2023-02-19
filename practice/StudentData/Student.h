#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

namespace sdds {
	const int MAX_NAME = 20;
	class Person {
		char Name[MAX_NAME];
	public:
		Person();
		void set(const char*);
		void display(std::ostream&)const;
	};

	class Student : public Person {
		int Greades[]
	};
}

#endif // !STUDENT_H

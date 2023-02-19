#include <iostream>
class Students {
	int ID = 0;
	double number = 0;
public:
	void setID(int x) { ID = x; }
	bool operator>(const Students& compare) { return this->ID > compare.ID; }
	//operator int() { return ID; }
	Students& operator=(int x) { this->ID = x; return *this; }
	std::ostream& print(std::ostream& ostr) const {
		ostr << "student id     = " << this->ID << std::endl;
		ostr << "student number = " << this->number << std::endl;
		return ostr;
	}
};
std::ostream& operator<<(std::ostream& ostr, const Students& info) {
	info.print(ostr);
	return ostr;
}

int main() {
	Students s1, s2;
	s1.setID(10);
	s2.setID(20);
	if (s1 > s2)std::cout << "s1 is greater than s2" << std::endl;
	else std::cout << "s1 is not greater than s2" << std::endl;

	//std::cout << int(s1) << std::endl;
	s1 = 100;
	//std::cout << int(s1) << std::endl;
	std::cout << s1;
	return 0;
}
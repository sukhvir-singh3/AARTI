#include <iostream>
class Students {
	int ID=0;
public:
	void setID(int x) {
		ID = x;
	}
	void isLessThan(Students& s2) {
		if (this->ID < s2.ID)
			std::cout << "s1 is less than s2";
		else
			std::cout << "s2 is less than s1";
	}
};
int main() {
	Students s1, s2;
	s2.setID(10);
	s2.setID(20);
	s1.isLessThan(s2);
	return 0;
}


class Students {
	int number;
public:
	Students() { number = 0; };
	Students(int num) {
		number = num;
	}
	virtual void printName() const{
		std::cout << "Student ID = " << number;
	}
};
class Teacher : public Students {
	int Id;
public:
	Teacher() { Id = 0; }
	Teacher(int num) {
		Id = num;
	}
	void printName()const {
		std::cout << "Teacher ID = " << Id << std::endl;
		//Students::printName();
	}

	Teacher(int tid, int sid) : Students(sid) {
		Id = tid;
	}
};
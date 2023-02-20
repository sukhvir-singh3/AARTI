#include <iostream>

class shape{
	public:
		virtual void draw(){
			std::cout << "Drawing Shape" << std::endl;
		}	
};

class circle : public shape{
	public:	
		 void draw(){
			std::cout << "Drawing Circle" << std::endl;
		}	
};

class rectangle : public shape{
	public:
		 void draw(){
			std::cout << "Drawing Rectangle" << std::endl;
		}	
};

int main(){
	shape *s1 = new circle;
	shape *s2 = new rectangle;

	std::cout << typeid(*s1).name()<< std::endl;
	std::cout << typeid(*s2).name()<< std::endl;
	
	if(typeid(*s1) == typeid(circle))
		std::cout << "both ID's are the same" << std::endl;
	return 0;
}

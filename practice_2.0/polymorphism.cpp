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

class test {
	public:
		 void draw(){
			std::cout << "Drawing Rectangle" << std::endl;
		}	
};
int main(){
	shape *s1 = new circle;
	//shape *s1 = new rectangle;
		
	circle* c1 = dynamic_cast<circle*>(s1);
	test* t1 = dynamic_cast<test*>(s1);
	if(c1){
		std::cout << "Successful" << std::endl;
		c1->draw();
	}
	if(t1){
		std::cout << "Successful" << std::endl;
	}
	else{
		std::cout << "UNSuccessful" << std::endl;
	}
	//s1->draw();
	//s2->draw();

	return 0;
}

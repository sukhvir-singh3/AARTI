#include <iostream>
void check(int x){
	if(x == 0)
		throw "Value was Zero\n";
	else
		std::cout << "Not Zero"<< std::endl;
	}
int main(){
	try{
		check(3);
		check(0);
	}catch(const char* msg){
		std::cout << msg << std::endl;
	}
	return 0;
}

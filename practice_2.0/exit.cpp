#include <iostream>
int check(int x){
	if(x == 3)
		exit(0);
	else 
	    return 0;
}
int main(){

	check(3);
	std::cout << "will print?" << std::endl;
	return 0;
}

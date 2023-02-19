#include <iostream>
int main(){

	enum counting { zero, one , two , three };
	std::cout << counting::zero << std::endl;
	std::cout << counting::one << std::endl;
	std::cout << counting::two << std::endl;
	std::cout << counting::three << std::endl;

	
	return 0;
}

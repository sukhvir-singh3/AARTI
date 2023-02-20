#include <iostream>
void check(int arr[], int num){
	if(num > 2)
		throw std::out_of_range("num is greater than 3");
	else
		std::cout << arr[num];	
}
int main(){
	int a[3] = {1,2,3};	
	int num;
	std::cout << "Enter: ";
	std::cin>>num;

	try{
		check(a, num);
	}
	catch(std::out_of_range& e){
		std::cout << e.what();
	}

	return 0;
}

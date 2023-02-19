#include <iostream>
#include <vector>
#include <functional>
#include <execution>
#include <algorithm>

int main() {
	/*auto lambda = [](int a, int b) {std::cout << a << " " << b; };
	auto test = std::bind(lambda, std::placeholders::_2, std::placeholders::_1);*/

	//map by transform
	std::vector<int> nums{ 1,2,3,4,5};
	std::vector<int>multiple;
	auto lambda = [](int nums) {return std::pow(nums,2); };
	std::transform(nums.begin(), nums.end(), std::back_inserter(multiple), lambda);

	//filter by copoy_if
	std::vector<int>odd;
	auto pra = [](int nums) {return nums & 1; };
	std::copy_if(nums.begin(), nums.end(), std::back_inserter(odd), pra);

	//reduce by reduce
	auto binary_op = [](int a, int b) {return a + b; };
	int result = std::reduce(std::execution::par, nums.begin(), nums.end(), 0, binary_op);

	//reduce by accumulate
	int resutl_2 = std::accumulate(nums.begin(), nums.end(), 0, binary_op);
	std::cout << resutl_2;
	/*for (int i : odd)
		std::cout << i << '\n';*/
	return 0;
}
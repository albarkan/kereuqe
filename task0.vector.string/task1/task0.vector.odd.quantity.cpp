#include <iostream>
#include <vector>
// #include <string>
int main() {
	std::vector<int> nums = { 1, 5, 7, 10, 14 };
	// string s = "acdefg";
	/* for (char c : s){
	std::cout << c << ",";
	}
	*/
	int quantity = 0;
	for (auto c : nums){	
		if (c % 2 == 1){
			quantity++;
		}
	}

	std::cout << "In this vector are " << quantity << " odd numbers.\n";
	return 0;
}
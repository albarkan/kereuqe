#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void algorithmSort() {
	std::vector<int> nums = { 1, 2, 3, 8, 10, 4, 5, 5 };
	std::sort(begin(nums), end(nums));
	for (auto x : nums) {
		std::cout << x << " ";
	}
}

void algorithm() {
	std::vector<int> nums = { 1, 2, 3, 4, 5, 5 };
	int quantity = std::count(begin(nums), end(nums), 5);
	std::cout << "There are " << quantity << "fives";
}

int main()
{
	algorithmSort();
	algorithm();
	return 0;
}


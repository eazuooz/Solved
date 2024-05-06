#pragma region LIB
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>
#pragma endregion


int main()
{
	std::vector<int> numbers = {};
	int count = 0;
	std::cin >> count;

	for (size_t i = 0; i < count; i++)
	{
		int number = 0;
		std::cin >> number;

		numbers.push_back(number);
	}

	//std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minmax;
	auto minmax = std::minmax_element(numbers.begin(), numbers.end());
	std::cout << *minmax.first << " " << *minmax.second;

    return 0;
}


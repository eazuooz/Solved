#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#pragma endregion


int main()
{
	std::stack<int> stack;
	int length = 0;
	std::cin >> length;

	std::vector<char> record = {};

	int count = 1;
	for (size_t i = 0; i < length; i++)
	{
		int num = 0;
		std::cin >> num;

		while (count <= num)
		{
			stack.push(count++);
			record.push_back('+');
		}

		if (stack.top() == num)
		{
			stack.pop();
			record.push_back('-');
		}
		else
		{
			std::cout << "NO";
			return 0;
		}

	}

	for (char ch : record)
		std::cout << ch << "\n";

	return 0;
}


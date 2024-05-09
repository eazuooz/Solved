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
	while (true)
	{
		std::string num = "";
		std::cin >> num;

		std::string buff = num;
		std::reverse(num.begin(), num.end());

		if (buff[0] == '0')
			break;

		if (buff == num)
			std::cout << "yes" << std::endl;
		else
			std::cout << "no" << std::endl;
	}

	return 0;
}


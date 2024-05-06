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
	std::string input = "";
	std::cin >> input;

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		int find = input.find(ch);
		std::cout << find << " ";
	}
		
    return 0;
}


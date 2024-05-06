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
	int count = 0;
	std::cin >> count;
	
	for (size_t i = 0; i < count; i++)
	{
		int width = 0;
		int height = 0;
		int number = 0;

		std::cin >> height;	
		std::cin >> width;
		std::cin >> number;

		int floor = number % height;
		int roomNumber = number / height + 1;

		if (floor == 0)
		{
			floor = height;
			roomNumber = number / height;
		}
		
		std::cout << floor * 100 + roomNumber << std::endl;
	}
		
    return 0;
}


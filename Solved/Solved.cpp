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
	int length = 0;
	std::string input = "";
	std::cin >> length >> input;

	long long hash = 0;
	long long r = 1;
	const long long m = 1234567891;
	for (int i = 0; i < length; i++)
	{
		char ch = input[i];
		int value = (ch - 'a') + 1;
		
		hash = (hash + value * r) % m;
		r = (r * 31) % m;
	}

	std::cout << hash;

	return 0;
}


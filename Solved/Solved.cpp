#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <list>
#include <stack>
#include <numeric>
#pragma endregion

using namespace std;

// Plus one
vector<int> plusOne(vector<int>& digits) 
{
	reverse(digits.begin(), digits.end());

	int i = 0;
	while (true)
	{
		int ret = 0;
		if (i < digits.size())
		{
			digits[i] += 1;
			ret = digits[i];
		}
		else
		{
			digits.push_back(1);
		}

		
		if (ret == 10)
		{
			digits[i++] = 0;
		}
		else
		{
			break;
		}
	}
		
	reverse(digits.begin(), digits.end());

	
	return digits;
}

int main()
{
	vector<int> digits = { 3, 1, 4 };

	plusOne(digits);

	return 0;
}


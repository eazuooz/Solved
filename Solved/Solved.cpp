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

//containsDuplicate
bool containsDuplicate(vector<int>& nums)
{
	unordered_map<int, int> seen;
	for (int num : nums) 
	{
		if (seen[num] >= 1)
			return true;

		seen[num]++;
	}
	return false;
}

int main()
{
	vector<int> nums = { 1,2,3,1 };
	containsDuplicate(nums);

	return 0;
}

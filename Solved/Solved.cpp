#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <stack>
#include <numeric>
#pragma endregion

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> numMap;
	int n = nums.size();

	// Build the hash table
	for (int i = 0; i < n; i++)
	{
		numMap[nums[i]] = i;
	}

	// Find the complement
	for (int i = 0; i < n; i++)
	{
		int complement = target - nums[i];
		if (numMap.count(complement) && numMap[complement] != i)
		{
			return { i, numMap[complement] };
		}
	}

	return {}; // No solution found
}

int main()
{
	std::vector<int> nums = { 2,7,11,15 };
	twoSum(nums, 9);

	return 0;
}

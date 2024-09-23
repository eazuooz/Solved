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

//Single Number
int singleNumber(vector<int>& nums) 
{
	int onceNum = 0;
	unordered_map<int, int> bucket = {};

	for (int num : nums)
	{
		if (bucket[num] >= 0)
			bucket[num]++;
	}

	for (auto   iter : bucket)
	{
		if (iter.second <= 1)
		{
			return iter.first;
		}
	}

	return onceNum;
}

int main()
{
	vector<int> nums = { 4,1,2,1,2 };
	singleNumber(nums);

	return 0;
}



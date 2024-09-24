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

// Move Zeroes
void moveZeroes(vector<int>& nums)
{
	int h = 0;
	for (int i = 0; i < nums.size(); i++) 
	{
		if (nums[i] != 0) 
		{
			swap(nums[i], nums[h]);
			h++;
		}
	}
}

int main()
{
	vector<int> nums = { 0,1,0,3,12 };

	moveZeroes(nums);

	return 0;
}


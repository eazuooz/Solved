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
//Remove Duplicates from Sorted Array

int removeDuplicates(vector<int>& nums)
{
	int j = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i - 1])
		{
			nums[j] = nums[i];
			j++;
		}
	}
	return j;
}

int main()
{
	vector<int> nums = { 1,1,2 };
	int output = removeDuplicates(nums);

	//5, nums = [0,1,2,3,4,_,_,_,_,_]

	return 0;
}

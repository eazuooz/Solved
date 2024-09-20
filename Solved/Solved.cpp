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

//Rotate Array
void rotate(vector<int>& nums, int k) 
{
	k = k % nums.size();
	reverse(nums.begin(), nums.begin() + (nums.size() - k));
	reverse(nums.begin() + (nums.size() - k), nums.end());
	reverse(nums.begin(), nums.end());
}

int main()
{
	//vector<int> nums = { -1,-100,3,99 };
	vector<int> nums = { 1,2,3,4,5,6,7 };
	//vector<int> nums = { -1 };
	//rotate(nums, 1);
	rotate(nums, 10);

	return 0;
}

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

// Intersection of Two Arrays II
vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
{
	vector<int> ret = {};
	unordered_map<int, int> map = {};

	vector<int> search = nums1.size() <= nums2.size() ? nums1 : nums2;
	vector<int> findNumbers = nums1.size() > nums2.size() ? nums1 : nums2;

	for (int num : findNumbers)
	{
		if (map[num] >= 0)
			map[num]++;
	}

	std::sort(search.begin(), search.end());

	for (int num : search)
	{
		if (map.find(num) != map.end() && map[num] > 0)
		{
			map[num]--;
			ret.push_back(num);
		}
			
	}

	return ret;
}

int main()
{
	//vector<int> nums1 = { 1,2,2,1 };
	//vector<int> nums2 = { 2,2 };

	vector<int> nums1 = { 3,1,2 };
	vector<int> nums2 = { 1,1 };

	intersect(nums1, nums2);

	return 0;
}


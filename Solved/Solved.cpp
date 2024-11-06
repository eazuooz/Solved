#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <numeric>
#include <queue>
#pragma endregion

using namespace std;

// Merge Sorted Array

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
	int a = m - 1;
	int b = n - 1;
	int c = m + n - 1;

	while (b >= 0)
	{
		if (a >=0 && nums1[a] > nums2[b])
		{
			nums1[c--] = nums1[a--];
		}
		else
		{
			nums1[c--] = nums2[b--];
		}
	}
}
// 머지 테스트
// 1
//2
int main()
{
	vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
	int m = 3;

	vector<int> nums2 = { 2, 5, 6 };
	int n = 3;

	merge(nums1, m, nums2, n);

	return 0;
}


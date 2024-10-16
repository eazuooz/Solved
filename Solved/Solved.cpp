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

// sortedArrayToBST
struct TreeNode 
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


TreeNode* insert(vector<int>& nums, int start, int end)
{
	if (start == end)
		return nullptr;

	int mid = (start + end) / 2;
	TreeNode* node = new TreeNode(nums[mid]);

	node->left = insert(nums, start, mid);
	node->right = insert(nums, mid + 1, end);
	
	return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums)
{
	TreeNode* root = nullptr;
	root = insert(nums, 0, nums.size());

	return root;
}

int main()
{
	vector<int> nums = { -10, -3, 0, 5, 9 /*1, 3*/ };
	TreeNode* root = sortedArrayToBST(nums);

	return 0;
}


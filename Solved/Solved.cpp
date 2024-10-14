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

// Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


void RecursiveisSymmetric(TreeNode* node, int level, vector<vector<int>>& ans)
{
	if (node == nullptr)
		return;

	if (ans.size() <= level)
		ans.push_back(vector<int>());

	ans[level].push_back(node->val);

	RecursiveisSymmetric(node->left, level + 1, ans);
	RecursiveisSymmetric(node->right, level + 1, ans);
	
}


vector<vector<int>> levelOrder(TreeNode* root)
{
	if (root == nullptr)
		return vector<vector<int>>();

	vector<vector<int>> ans;
	RecursiveisSymmetric(root, 0, ans);

	return ans;
}


int main()
{
	TreeNode* root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);

	//root->left->left = new TreeNode(3);
	//root->left->right = new TreeNode(4);

	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);

	levelOrder(root);

	return 0;
}


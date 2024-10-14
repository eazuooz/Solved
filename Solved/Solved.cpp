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


bool RecursiveisSymmetric(TreeNode* left, TreeNode* right)
{
	if (left == nullptr && right == nullptr)
		return true;
	if (left == nullptr || right == nullptr)
		return false;

	if (left->val == right->val)
	{
		bool bLeft = RecursiveisSymmetric(left->left, right->right);
		bool bRight = RecursiveisSymmetric(left->right, right->left);

		return bLeft && bRight;
	}
	
	return false;
}


bool isSymmetric(TreeNode* root)
{
	if (root == nullptr)
		return true;

	return RecursiveisSymmetric(root->left, root->right);
}


int main()
{
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(2);

	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(4);

	//root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(3);

	//root->left->left->left = new TreeNode(6);
	//root->right->right->right = new TreeNode(6);

	bool check = isSymmetric(root);

	return 0;
}


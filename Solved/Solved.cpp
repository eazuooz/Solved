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

int RecursiveFindMaxDepth(TreeNode* node)
{
	if (node == nullptr)
		return 0;
		
	int leftDepth = RecursiveFindMaxDepth(node->left);
	int rogjtDepth = RecursiveFindMaxDepth(node->right);

	return std::max(leftDepth, rogjtDepth) + 1;
}

int maxDepth(TreeNode* root)
{
	return RecursiveFindMaxDepth(root);
}


int main()
{
	TreeNode* root = new TreeNode(3);
	root->left = new TreeNode(9);
	root->right = new TreeNode(20);

	root->right->left = new TreeNode(15);
	root->right->right = new TreeNode(7);

	bool check = maxDepth(root);

	return 0;
}


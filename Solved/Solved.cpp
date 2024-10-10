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


//enum eDirection
//{
//	Root,
//	Left,
//	Right,
//};
bool RecursiveIsValidBST(TreeNode* node, long min, long max)
{
	if (node == nullptr)
		return true;

	if (!(node->val > min && node->val < max))
		return false;

	bool bLeft = RecursiveIsValidBST(node->left, min, node->val);
	bool bRight = RecursiveIsValidBST(node->right, node->val, max);

	return bLeft && bRight;
}


bool isValidBST(TreeNode* root)
{
	//std::queue<TreeNode*> queue;
	//queue.push(root);

	//while (!queue.empty())
	//{
	//	TreeNode* p = queue.front();
	//	
	//	if (p->left && p->val <= p->left->val)
	//		return false;
	//	if (p->right && p->val >= p->right->val)
	//		return false;

	//	if (p->left)
	//		queue.push(p->left);
	//	if (p->right)
	//		queue.push(p->right);

	//	queue.pop();
	//}


	bool bAns = RecursiveIsValidBST(root, LONG_MIN, LONG_MAX);


	return bAns;
}


int main()
{
	TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(7);

	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(9);

	bool check = isValidBST(root);

	return 0;
}


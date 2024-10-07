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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
struct ListNode
{
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}

	int val;
	ListNode* next;
};

bool isPalindrome(ListNode* head)
{
	ListNode* p = nullptr;
	ListNode* q = nullptr;
	ListNode* r = head;

	vector<int> origin;
	while (r != nullptr)
	{
		origin.push_back(r->val);
		p = q;
		q = r;
		r = r->next;

		q->next = p;
	}

	int idx = 0;
	for (ListNode* p = q; p != nullptr; p = p->next)
	{
		if (p->val != origin[idx++])
			return false;
	}

	return true;
}


int main()
{
	ListNode* list1 = nullptr;

	list1 = new ListNode(1);
	list1->next = new ListNode(1);
	list1->next->next = new ListNode(2);
	list1->next->next->next = new ListNode(1);



	bool check = isPalindrome(list1);

	return 0;
}


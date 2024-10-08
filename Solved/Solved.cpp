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
//Linked List Cycle
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

bool hasCycle(ListNode *head)
{
	ListNode* p = head;
	std::unordered_map<ListNode*, int> umap;
	while (p != nullptr)
	{
		if (umap[p] >= 1)
			return true;

		if (umap[p] >= 0)
			umap[p]++;

		p = p->next;
	}

	return false;
}


int main()
{
	ListNode* list1 = nullptr;

	list1 = new ListNode(3);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(0);
	list1->next->next->next = new ListNode(4);
	//list1->next->next->next->next = list1->next;

	bool check = hasCycle(list1);

	return 0;
}


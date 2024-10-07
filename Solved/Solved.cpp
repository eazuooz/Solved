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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    if (list1 == nullptr)
        return list2;

    if (list2 == nullptr)
        return list1;

    if (list1->val < list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main()
{	
    ListNode* list1 = nullptr;

    list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(4);


    ListNode* list2 = nullptr;
    list2 = new ListNode(1);
    list2->next= new ListNode(2);
    list2->next->next = new ListNode(4);

	mergeTwoLists(list1, list2);

	return 0;
}


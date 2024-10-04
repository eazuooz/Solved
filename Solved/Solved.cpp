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

//*
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
 
struct ListNode 
{
    ListNode(int x) : val(x), next(NULL) 
    {
    
    }

    int val;
    ListNode *next;
};

void deleteNode(ListNode* node)
{
	ListNode* nextNode = node->next;

	node->val = nextNode->val;
	node->next = nextNode->next;

	delete nextNode;
	nextNode = nullptr;
}

int main()
{	
    ListNode* head = nullptr;

    head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

	deleteNode(head);
		  


	return 0;
}


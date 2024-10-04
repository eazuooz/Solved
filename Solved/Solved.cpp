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
 
//Delete Node in a Linked List
struct ListNode 
{
    ListNode(int x) : val(x), next(NULL) 
    {
    
    }

    int val;
    ListNode *next;
};

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    int length = 0;
    ListNode* p = head;
    while (p != nullptr)
    {
        p = p->next;
        length++;
    }

    p = head;
    ListNode* prev = nullptr;
    while (p != nullptr)
    {
        if (length == n)
        {
			ListNode* nextNode = p->next;

            if (nextNode)
            {
                p->val = nextNode->val;
			    p->next = nextNode->next;
            }
            else
            {
                if (prev)
                {
					delete prev->next;
					prev->next = nullptr;
				}
                else
                {
                    delete p;
                    p = nullptr;

                    return nullptr;
                }

                break;
            }
			

			delete nextNode;
			nextNode = nullptr;
        }

        length--;
        prev = p;
        p = p->next;
    }

    return head;
}

int main()
{	
    ListNode* head = nullptr;

    head = new ListNode(1);
    head->next = new ListNode(2);
    //head->next->next = new ListNode(3);
    //head->next->next->next = new ListNode(4);
    //head->next->next->next->next = new ListNode(5);

	removeNthFromEnd(head, 1);

	return 0;
}


#include "leetcode.h"

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

/**
Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.

*/
class Solution {
public:
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		ListNode *dummyHead = new ListNode(0);
		ListNode *p = dummyHead;
		while (l1 && l2)
		{
			if (l1->val < l2->val)
			{
				p->next = l1;
				p = p->next;
				l1 = l1->next;
			}
			else
			{
				p->next = l2;
				p = p->next;
				l2 = l2->next;
			}
		}
		l1 ? p->next = l1 : p->next = l2;
		return dummyHead->next;
	}
};

/*
int main()
{
}
//*/
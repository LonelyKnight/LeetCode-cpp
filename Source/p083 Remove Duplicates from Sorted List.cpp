#include "leetcode.h"

/**
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

*/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode *deleteDuplicates(ListNode *head) {
		if (head == NULL) return head;
		ListNode *p = head;
		while (p)
		{
			while (p->next && p->val == p->next->val) p->next = p->next->next;
			p = p->next;
		}
		return head;
	}
};
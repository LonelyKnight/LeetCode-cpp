#include "leetcode.h"

/**
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].
*/
class Solution {
public:
	int removeDuplicates(int A[], int n) {
		if (n < 2) return n;
		int slow = 0, fast = 0;
		while (fast < n)
		{
			while (fast < n && A[fast] == A[slow]) ++fast;
			if (fast < n) A[++slow] = A[fast];
		}
		return ++slow;
	}
};
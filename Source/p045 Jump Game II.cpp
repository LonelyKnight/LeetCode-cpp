#include "leetcode.h"

/**
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

For example:
Given array A = [2,3,1,1,4]

The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)

*/

class Solution {
public:
	int jump(int A[], int n) {
		int l = 0, r = 0, steps = 0;
		while (r < n - 1)
		{
			++steps;
			int newr = r;
			for (int i = l; i <= r; i++)
				newr = max(newr, i + A[i]);
			if (newr == r) return -1;
			l = r + 1;
			r = newr;
		}
		return steps;
	}
};
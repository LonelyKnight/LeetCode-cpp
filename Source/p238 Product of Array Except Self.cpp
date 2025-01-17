#include "leetcode.h"

/**
Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve it without division and in O(n).

For example, given [1,2,3,4], return [24,12,8,6].

Follow up:
Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

*/

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> o(nums.size(), 1);
		for (int i = 1; i < nums.size(); i++)
			o[i] = o[i - 1] * nums[i - 1];
		int t = 1;
		for (int i = nums.size() - 2; i >= 0; i--)
		{
			t *= nums[i + 1];
			o[i] *= t;
		}
		return o;
	}
};

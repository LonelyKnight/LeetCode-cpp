#include "leetcode.h"

/**
Given a list of non negative integers, arrange them such that they form the largest number.

For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.


*/

class Solution {
public:
	string largestNumber(vector<int>& nums) {
		vector<string> vs;
		for (auto x : nums) vs.push_back(to_string(x));
		sort(vs.begin(), vs.end(), [](const string &a, const string &b) {return a + b < b + a; });
		string res = "";
		for (int i = vs.size() - 1; i >= 0; i--)
			res += vs[i];
		if (res.size() > 0 && res[0] == '0') return "0";
		return res;
	}
};

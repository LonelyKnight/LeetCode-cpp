#include "leetcode.h"

/**
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.

Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.

*/

class Solution {
public:
	string countAndSay(int n) {
		if (n < 1) return "";
		if (n == 1) return "1";
		string s = "1";
		for (; n > 1; --n)
		{
			string nexts = "";
			int count = 1;
			for (int i = 1; i < s.length(); i++)
				if (s[i] == s[i - 1])
					++count;
				else
				{
					nexts.push_back(count + '0');
					nexts.push_back(s[i - 1]);
					count = 1;
				}
			nexts.push_back(count + '0');
			nexts.push_back(s[s.length() - 1]);
			s = nexts;
		}
		return s;
	}
};
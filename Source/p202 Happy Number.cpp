#include "leetcode.h"

/**
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
Credits:
Special thanks to @mithmatt and @ts for adding this problem and creating all test cases.


 */
 
 
class Solution {
public:
    
    int trans(int n)
    {
        int ans = 0;
        for (;n;n/=10)
            ans += (n%10) * (n%10);
        return ans;
    }
    
    bool isHappy(int n) {
        unordered_set<int> us;
        while (1 != n && !us.count(n))
        {
            us.insert(n);
            n = trans(n);
        }
        return 1 == n;
    }
};

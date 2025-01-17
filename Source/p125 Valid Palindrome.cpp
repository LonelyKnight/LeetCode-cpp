#include "leetcode.h"

/**
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.

*/

class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0, j = s.length() - 1; i < j; i++,j--)
        {
            while (i < j && !isA_Z_and_2lower(s[i])) i++;
            while (i < j && !isA_Z_and_2lower(s[j])) j--;
            if (s[i] != s[j]) return false;
        }
        return true;
    }
    
    bool isA_Z_and_2lower(char &a)
    {
        if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9') )
        {
            if (a >= 'A' && a <= 'Z')
                a = a - 'A' + 'a';
            return true;
        }
        return false;
    }
};

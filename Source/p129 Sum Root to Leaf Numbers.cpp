#include "leetcode.h"

/**
Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 123.

Find the total sum of all root-to-leaf numbers.

For example,

    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = 12 + 13 = 25.

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        dfs(root, 0, ans);
        return ans;
    }
    
    void dfs(TreeNode *r, int cur, int &ans)
    {
        if (!r) return;
        if (!r->left && !r->right)
        {
            ans += cur * 10 + r->val;
            return;
        }
        dfs(r->left, cur * 10 + r->val, ans);
        dfs(r->right, cur * 10 + r->val, ans);
    }
};

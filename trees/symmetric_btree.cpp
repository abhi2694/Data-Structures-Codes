/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    bool helper(TreeNode* lefty, TreeNode* righty)
    {
        if(lefty==NULL && righty==NULL)
            return true;
        if(lefty==NULL || righty==NULL)
            return false;
        
        return (lefty->val == righty->val) && helper(lefty->left, righty->right) && helper(lefty->right,righty->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return helper(root,root);
    }
};
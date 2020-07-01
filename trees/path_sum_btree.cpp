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
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root==NULL)
            return false;
        
        if((sum - root->val == 0) && (!root->left && !root->right))
            return true;
        
        bool a = false;
        if(root->left)
            a = hasPathSum(root->left,sum-root->val);
        
        bool b = false;
        if(root->right)
            b = hasPathSum(root->right,sum-root->val);
        
        return a || b;
    }
};
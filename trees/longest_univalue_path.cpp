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
    
    int helper(TreeNode* root, int &maxi)
    {
        if(!root)
            return 0;
        
        int a = helper(root->left,maxi);
        int b = helper(root->right,maxi);
        
        int al = 0, ar = 0;
        
        if(root->left!=NULL && root->left->val == root->val)
            al += a + 1;
        
        if(root->right!=NULL && root->right->val == root->val)
            ar += b + 1;
        maxi = max(maxi,al+ar);
        return max(al,ar);
    }
    
    int longestUnivaluePath(TreeNode* root) {
        if(!root)
            return 0;
        
        int maxi= 0;
        int a = helper(root, maxi);
        return maxi;
    }
};
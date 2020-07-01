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
    
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        return max(height(root->left),height(root->right))+1;
    }
    
    void sum(TreeNode* root, int level, int& sumu, int h)
    {
        if(root==NULL)
            return ;
        
        if(root->left ==NULL && root->right==NULL)
        {
            if(level==h-1)
                sumu+=root->val;
            
            else
                return ;
        } 
        
        sum(root->left,level+1,sumu,h);
        sum(root->right,level+1,sumu,h);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int h = height(root);
        
        int sumu = 0;
        sum(root,0,sumu,h);
        
        return sumu;
    }
};
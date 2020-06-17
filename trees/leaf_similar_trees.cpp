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
    
    void helper(TreeNode* root, vector<int> &a)
    {
        if(root==NULL)
            return ;
        
        if(root->left==NULL && root->right==NULL)
            a.push_back(root->val);
        
        helper(root->left,a);
        helper(root->right,a);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a,b;
        helper(root1,a);
        helper(root2,b);
        
        int m = a.size();
        int n = b.size();
        int i,j;
        for(i=0,j=0;i<m && j<n;i++,j++)
        {
            if(a[i]!=b[j])
                return false;
        }
        
        if(i!=m)
            return false;
        if(j!=n)
            return false;
        
        return true;
    }
};
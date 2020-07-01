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
    
    void helper(TreeNode* root, map<int,vector<int>> &m, int level)
    {
        if(root==NULL)
         return ;
        
        m[level].push_back(root->val);
        helper(root->left,m,level+1);
        helper(root->right,m,level+1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL)
        {
            vector<vector<int>> v;
            return v;
        }
        map<int,vector<int>> m;
        
        helper(root,m,0);
        
        vector<vector<int>> v;
        
        auto i = m.end();
        i--;
        for(;i!=m.begin();i--)
           v.push_back(i->second);
        
        v.push_back(i->second);
        
        return v;
    }
};
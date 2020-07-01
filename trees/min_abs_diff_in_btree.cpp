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
    
    void helper(TreeNode* root, set<int> &s)
    {
        if(root==NULL)
            return ;
        
        s.insert(root->val);
        
        helper(root->left,s);
        helper(root->right,s);
    }
    
    int getMinimumDifference(TreeNode* root) {
       set<int> s;
        helper(root,s);
        
        int mini = INT_MAX;
        
        for(auto it=s.begin();it!=s.end();it++)
        {
            auto it2 = it;
            if(++it2 != s.end())
            {
                if(abs(*it2 - *it) < mini)
                    mini = abs(*it2 - *it);
            }
        }
        
        return mini;
    }
};
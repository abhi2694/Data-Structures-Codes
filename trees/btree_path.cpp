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

    void backtrack(TreeNode * root,string s,vector<string> &ans)
    {
        if(!root)
        {
            return;
        }
        if(!root->left&&!root->right)
        {
            s+=to_string(root->val);
            ans.push_back(s);
            return;
        }
        s=s+to_string(root->val)+"->";
        backtrack(root->left,s,ans);
        backtrack(root->right,s,ans);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
        {
            vector<string> ans;
            return ans;
        }
        
        vector<string> ans;
        backtrack(root,"",ans);
        return ans;
    }
};
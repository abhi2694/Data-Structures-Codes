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
    
    void helper(TreeNode* root, map<int,TreeNode*> &m){
        if(root==NULL)
            return ;
        
        m[root->val] = root;
        helper(root->left,m);
        helper(root->right,m);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        map<int,TreeNode*> m;
        
        helper(root,m);
        
        TreeNode* head = m.begin()->second;
        head->left = NULL;
        TreeNode* temp = head;
        auto i = m.begin();
        i++;
        for(;i!=m.end();i++)
        {
            temp->right = i->second;
            temp = i->second;
            temp->left = NULL;
        }
        temp->right = NULL;
        
        return head;
        
    }
};
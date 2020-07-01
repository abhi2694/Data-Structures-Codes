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
    
    bool helper(TreeNode* s, TreeNode* t)
    {
        if(s==NULL && t==NULL)
            return true;
        
        if(s==NULL || t==NULL)
            return false;
        
        /*bool a = true;
        if(t->left)
            a = helper(s->left,t->left);
        bool b = true;
        if(t->right)
            b = helper(s->right,t->right);*/
        
        return (s->val == t->val) && helper(s->left,t->left) && helper(s->right,t->right);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(t==NULL)
            return true;
        
        if(s==NULL)
            return false;
        
        if(s->val == t->val)
        {
            bool a = helper(s,t);
            if(a)
                return a;
        }
        return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
};
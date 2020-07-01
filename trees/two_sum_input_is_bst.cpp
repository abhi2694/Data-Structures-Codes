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
    bool fn(TreeNode* one,TreeNode* two, int k){
        if(!one || !two) return false;
        if(one->val+two->val==k)
            if(one==two) return fn(one->left,two->right,k);
            else return true;
        else if(one->val+two->val<k)
            if(one==two) return fn(one,two->right,k);
            else return fn(one,two->right,k)||fn(one->right,two,k);
        else
            if(one==two) return fn(one,two->left,k);
            else return fn(one,two->left,k)||fn(one->left,two,k);
            
    }
    bool findTarget(TreeNode* root, int k) {
        return fn(root,root,k);
    }
};
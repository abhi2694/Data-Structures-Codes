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
    
    int helper(TreeNode* root, int sum, int including){
        if(!root) return 0;
        int notA = 0, notB = 0, incA = 0, incB = 0;
        if(including == 0){
           notA =  helper(root->left,sum,0);
            notB = helper(root->right,sum,0);
        }
        incA = helper(root->left,sum-root->val,1);
        incB = helper(root->right,sum-root->val,1);
        if(root->val == sum) return notA + notB + incA + incB + 1;
        return notA + notB + incA + incB;
    }
    
    int pathSum(TreeNode* root, int sum) {
        
        
        return helper(root,sum,0);
        
    }
};
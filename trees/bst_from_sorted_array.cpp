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
    
    TreeNode* helper(vector<int>& input, int si, int ei)
    {
        if(si>ei){
        return NULL;
    }
    int mid=(si+ei)/2;
    TreeNode* root=new TreeNode(input[mid]);
    root->left=helper(input,si,mid-1);
    root->right=helper(input,mid+1,ei);
    return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return helper(nums,0,n-1);
         
    }
};
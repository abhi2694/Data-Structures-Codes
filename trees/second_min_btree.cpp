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
    
    int findSecondMinimumValue(TreeNode* root) {
        int min1 = INT_MAX;
		int min2 = -1;

		queue<TreeNode*> q;
		q.push(root);

		while(!q.empty()){
			auto cur = q.front();
			q.pop();

			min1 = min(min1, cur->val);

			if(cur->val != min1 and (min2 > cur->val or min2 == -1))
				min2 = cur->val;

			if(cur->left)
				q.push(cur->left);

			if(cur->right)
				q.push(cur->right);
		}

		return min2;
    }
};
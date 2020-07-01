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

    
    void helper(TreeNode* root,map <int,pair<double,int>> &m,int level)
    {
        if(root==NULL)
            return ;
        
        if(m.count(level)==0)
        {
            pair<int,int> p;
            
            p.first = root->val;
            p.second = 1;
            m[level] = p;
        }
        
        else
        {
            m[level].first+=root->val;
            m[level].second++;
        }
        
        helper(root->left,m,level+1);
        helper(root->right,m,level+1);
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        map <int,pair<double,int>> m;
        
        helper(root,m,0);
        
        vector<double> v;
        
        for(auto i: m)
        {
            double a = (double)((double)(i.second.first)/(double)(i.second.second));
            v.push_back(a);
        }
        
        return v;
    }
};
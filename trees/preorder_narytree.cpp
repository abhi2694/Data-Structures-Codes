/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/


class Solution {
public:
   void pre(Node* root,vector<int>& hg){
        if(!root)return;
        hg.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            pre(root->children[i],hg);
        }
        return;
    } 
   vector<int> preorder(Node* root) {
        vector<int> hg;
        pre(root,hg);
        return hg;
    }
    
};